/*Implement a program to print the factorial of a given number.
input: integer n
constraints:0<=n<=10^14
output:integer n*/


#include <iostream>

using namespace std;

void fact(int n){
    if(n>=0 && n<=10^14) //constraints
    {
        int f=1;
  for(int i=1;i<=n;i++){  //factorial
    f *=i;
  }
  cout<<"\nFactorial of "<<n<<" numbers ="<<f;
  }else
  {
      cout<<"Out of Limits(0-10^14)";
  }

}

int main()
{
    int a;
    cout<<"Factorial of numbers"<<endl;
    cout<<"Enter number:";
    cin>>a;

    fact(a);

    return 0;
}
