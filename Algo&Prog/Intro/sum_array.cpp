/*Find the sum of array elements

Algorithm:
SUM_ARRAY(A,N)
[This algorithm finds the sum of array elements where A is an array with N elements]

step1: Set SUM:=0     [initialization]
step2: Repeat for I=1 to N:
       (a) Set SUM:= SUM + A[I]
step3: Write: SUM
step4: Exit

Code:
*/

#include <iostream>

using namespace std;

int main()
{
    int A[10]={1,5,7,3,8,6,3,2,9,4}; //index of first element is 0
    int I=0,SUM=0,N=9;
    while (I<=N)
    {
        SUM=SUM +A[I];
        I++;
    }
    cout<<"Sum = "<<SUM<<endl;
    return 0;
}
