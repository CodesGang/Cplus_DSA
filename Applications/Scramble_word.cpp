/*Implement a program to print the numbers of ways a given word can be scrambled.
input: string
output: integer n*/

#include <iostream>

using namespace std;

void fact(int n){

        int f=1;
  for(int i=1;i<=n;i++){  //factorial
    f *=i;
  }
  cout<<"\nFactorial of "<<n<<" numbers ="<<f;


}

int main()
{
    int a;
    string b;
    cout<<"Number of ways to scramble a word"<<endl;
    cout<<"Enter a word:";
    cin>>b;
    a=b.length();
    fact(a);

    return 0;
}
