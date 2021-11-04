/*Linear Search in array.

Algorithm:
LINAER SEARCH(LA,N,ITEM,LOC)
[This algorithm find out the location(LOC) of ITEM in the LA with N elements]

step1: Set LOC:=0, I:=1
step2: Repeat while LA[I] != ITEM:
       Set I:=I+1
step3: Set LOC:=I
step4: Write:LOC
step5: Exit

Code:*/
#include <iostream>

using namespace std;

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
    int j=1;
    while(a[j]!=t)
    {
        j=j+1;
    }
    loc=j;
    cout<<"\n Index of "<<t<<" is:"<<loc;
    return 0;
}
