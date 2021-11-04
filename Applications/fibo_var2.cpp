/*Implement a program to print the last digit of the sum of Fibonacci numbers.
input:integer n
Contraints: 0<=n<=10^14
output:n*/

#include <iostream>


using namespace std;

int fib(int n)
{
    int t1=0,t2=1,nt,i,x,s=1;
    if(n>=0 && n<=10^14) //Constraints
    {
        if(n==0)
        {
            return t1;
            }
    for(i=2;i<=n;i++)  //fibonacci number
    {
        nt=t1+t2;
        s=s+nt;
        t1=t2;
        t2=nt;
    }

    x=s%10; //Last digit of number
    cout<<" Last Digit of Sum of Fibonacci Number of"<<n<<" :";
    return x;
    }else
    {
        cout<<"Out of Limits(0-10^14)"<<endl;
    }
}

int main()
{
    int n;
    cout<<"\nLast Digit of Sum of Fibonacci number"<<endl;
    cout<<"\nEnter number:";
    cin>>n;
    cout<< fib(n);  //calling fibonacci number
    return 0;
}
