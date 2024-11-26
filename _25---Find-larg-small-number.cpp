// Find the Largest and Smallest Number
// Write a program to find the largest and smallest numbers in a list using a for loop.
// Input Example: [3, 5, 7, 2, 8]
// Output Example:

// Copy code
// Largest: 8  
// Smallest: 2

#include <iostream>
using namespace std;
int main()
{
    int number, digit;
    cout<<"Enter 5 Number Without Space : ";
    cin>>number;
    int comp_val = 0;
     int max=0;

    for(int i = 0; i<=number ;++i)
    {
        digit =number%10;
        cout<<digit<<" ";
        if(digit > comp_val) 
        {
          max = digit;
        }
        comp_val = digit;
        number = number / 10;
    }

    cout<<"The max Number Is : "<<max;

}