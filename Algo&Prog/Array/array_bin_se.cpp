/* Binary Search in Array.
[This algorithm finds the location of ITEM from sorted array LA having N elements]

Algorithm:
BINARY_SEARCH(LA,N,LB,UB,ITEM,LOC)
[This algorithm finds the location of ITEM from sorted array LA having N elements]

step1: Set BEG:=LB,END :=UB and
       MID:= INT((BEG+END)/2) [initialization]
step2: Repeat steps 3 & 4 while BEG<=END and LA[MID]!=ITEM:
step3: If ITEM<LA[MID], then: 
        Set END := MID-1
       Else
        Set BEG:=MID+1
step4: Set MID:=INT((BEG+END)/2)
step5: If LA[MID]=ITEM, then:
        Set LOC:=MID
       Else
        Set LOC:=NULL
step6: Write: LOC
step7: Exit

Code:*/
#include <iostream>

using namespace std;

int bs(int a[],int x,int l,int h)
{
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        return -1;
    }
}

int main()
{
    int a[10],i,t,n,loc=0;
    cout<<"Enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter an element:";
        cin>>a[i];
    }
    cout<<"\n Enter a term you want to find:";
    cin>>t;
    int r=bs(a,t,0,n);
    if(r== -1)
    {
        cout<<"\nNot found";
    }
    else
    {
        cout<<"\nElement is found at index :"<<r;
    }
    return 0;
}
