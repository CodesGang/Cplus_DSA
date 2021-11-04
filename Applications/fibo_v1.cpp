/*Implement a program to print the last digit of a large Fibonacci number.
input: n
constraints: 0<=n<=10^7
output: the last digit of Fn*/

#include <iostream>

using namespace std;

int fib(int n)
{
    int t1=0,t2=1,nt,i,x;
    if(n>=0 && n<=10^7) //Constraints
    {
        if(n==0)
        {
            return t1;
            }
    for(i=2;i<=n;i++)  //fibonacci number
    {
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }

    x=t2%10; //Last digit of number
    cout<<" Last Digit of Fibonacci Number of"<<n<<" :";
    return x;
    }else
    {
        cout<<"Out of Limits(0-10^7)"<<endl;
    }
}

int main()
{
    int n;
    cout<<"\nLast Digit of Large Fibonacci number"<<endl;
    cout<<"\nEnter number:";
    cin>>n;
    cout<< fib(n);  //calling fibonacci number
    return 0;
}
