// 12. Sum of Squares
// Write a program to calculate the sum of the squares of the first N natural numbers using a for loop.
// Input Example: 4
// Output Example: 1² + 2² + 3² + 4² = 30

#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    cout<<"Enter Number : ";
    cin>>number;

    for(int i = 1; i<=number;++i)
    {
      sum = sum + i*i;
    }
    cout<<sum<<endl;
}