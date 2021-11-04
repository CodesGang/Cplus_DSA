/*insertion in array.

Algorithm:
INSERT_ARRAY(LA,N,LOC,ITEM)
step1: Set I:=N
step2: Repeat steps 3&4
       while I>=LOC
step3: Set LA[I+1]:=LA[I]
step4: Set I:= I-1
step5: Set LA[LOC]:=ITEM
step6: Set N:=N+1
step7: Exit

Code:*/
#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int i,n,s,p;

    cout<<"Enter size of the array:";
    cin>>s;

    for(i=0;i<s;i++)
    {
        cout<<"Enter elements in array:";
        cin>>a[i];
    }

    cout<<"\nEnter element to insert:";
    cin>>n;
    cout<<"Enter the element position :";
    cin>>p;

    if(p>s+1 ||p<=0)
    {
        cout<<"Invalid position! Please position b/w 1 to"<<n;
    }
    else
    {
        for(i=s;i>=p;i--)
        {
            a[i]=a[i-1];
        }
        a[p-1]=n;
        s++;

        cout<<"\nArray elements after insertion :\n";
        for(i=0;i<s;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
