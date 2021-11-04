/*Deletion in array.

Algorithms:
DELETE_LA(LA,N,LOC,ELEM)
[This algorithm will delete an element from N Elements. The deleted element will be stored
in ELEM]

step1: Set ELEM:=LA[LOC]
step2: Repeat for I=Loc to N-1:
       [Move the (I+1)th element upward]
       Set LA[I]:=LA[I+1]
step3: Set N:=N-1
Step4: Exit

Code:*/
#include <iostream>

using namespace std;

int main()
{
    int i,elem,n,p,a[15];
    cout<<"Enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter an element:";
        cin>>a[i];
    }
    cout<<"Array before deleting\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Enter number u want to delete:";
    cin>>p;
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"\nFinal array after deletion\n";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
