/*Sum of two numbers

Algorithm1:
SUM()
[This algorithm finds the sum of two integer numbers]

step1: Read A,B
step2: Set S:=A+B
step3: Write S
step4: Exit

Code1:
*/

#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cout<<"Enter 2 numbers:";
    cin>>A>>B;
    int S=A+B;
    cout<<"Sum = "<<S;
    return 0;
}