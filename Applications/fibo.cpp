/*Implement a program for computing Fibonacci number.
input: integer n
constraints: 0<=n<=45
output: n*/

#include <iostream>

using namespace std;

int fib(int n)
{
    int t1=0,t2=1,nt,i;
    if(n>=0 && n<=45) //Constraints
    {
        if(n==0)
        return t1;
    for(i=2;i<=n;i++)  //fibonacci number
    {
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return t2;
    }else
    {
        cout<<"Out of Limits(0-45)"<<endl;
    }
}

int main()
{
    int n;
    cout<<"\nFibonacci number"<<endl;
    cout<<"\nEnter number:";
    cin>>n;
    cout<<fib(n);  //calling fibonacci number
    return 0;
}
