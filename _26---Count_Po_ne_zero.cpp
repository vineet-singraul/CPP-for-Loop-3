// 28. Count Positive, Negative, and Zero in a List
// Write a program to count the number of positive numbers, negative numbers, and zeros in a list using a for loop.
// Input Example: [-3, 0, 5, 9, -1, 0]

// Output Example:
// Positive: 2
// Negative: 2
// Zeros: 2

#include <iostream>
using namespace std;
int main()
{
    int number;
    int posi = 0, nega = 0, zero = 0;

    for (int i = 0; i <= 10; ++i)
    {
        cout << "Enter 5 Number Without Space : ";
        cin >> number;
        // number = number % 10;
        if (number > 0)
        {
            ++posi;
        }
        else if (number < 0)
        {
            ++nega;
        }
        else
        {
            ++zero;
        }
        // number = number / 10;
    }

    cout << "Positive : " << posi << endl;
    cout << "Negative : " << nega << endl;
    cout << "Zero : " << zero << endl;
}