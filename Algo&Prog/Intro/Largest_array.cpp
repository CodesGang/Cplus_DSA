/*Largest element &its Location in Array

Algorithm:
LARGEST_ARRAY(A,N)
[This algorithm finds the largest element from array A having N elements]

step1: Set I:=1,LOC:=1,MAX:=A[1]     [initialization]
step2: Repeat steps 3 & 4 While I<=N:
step3: If MAX<A[I], then:
       Set LOC:=I and MAX:=A[I]
step4: Set I:=I+1
step5: Write: MAX, LOC
step6: Exit

Code:
*/

#include <iostream>

using namespace std;

int main()
{
    int A[10]={1,5,7,3,8,6,3,2,9,4}; //index of first element is 0
    int I=0,LOC=1, MAX=A[1],N=9;
    while (I<=N)
    {
        if (MAX<A[I])
        {
            LOC=I;
            MAX=A[I];
        }
        I++;
    }
    cout<<"Maximum = "<<MAX<<endl<<"Location = "<<LOC;
    return 0;
}
