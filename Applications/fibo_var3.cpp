/*Implement a program to print the last digit of the Sum of squares of Fibonacci
input: integer n
contraints: 0<=n<=10^14
output: last digit of f0^2+f1^2+..+fn^2*/

#include<iostream>
using namespace std;

int fib(int n)
{
    int t1=0,t2=1,nt,i,x,s=1,sq;
    if(n>=0 && n<=10^14) //Constraints
    {
        if(n==0)
        {
            return t1;
            }
    for(i=2;i<=n;i++)  //fibonacci number
    {
        nt=t1+t2;
        s=s+(nt*nt);
        t1=t2;
        t2=nt;
    }
    sq=s;
    x=sq%10; //Last digit of number
    cout<<" Last Digit of Sum of Squares of Fibonacci Number of"<<n<<" :";
    return x;
    }else
    {
        cout<<"Out of Limits(0-10^14)"<<endl;
    }
}

int main()
{
    int n;
    cout<<"\nLast Digit of Sum of Squares of Large Fibonacci number"<<endl;
    cout<<"\nEnter number:";
    cin>>n;
    cout<< fib(n);  //calling fibonacci number
    return 0;
}
