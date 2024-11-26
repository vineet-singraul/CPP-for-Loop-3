#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main()
{
    int number;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int count6 = 0, count7 = 0, count8 = 0, count9 = 0, count0 = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    number = abs(number);

    while (number > 0)
    {
        int mod = number % 10; // Extract the last digit

        // Increment the count for the corresponding digit
        if (mod == 1)
            ++count1;
        else if (mod == 2)
            ++count2;
        else if (mod == 3)
            ++count3;
        else if (mod == 4)
            ++count4;
        else if (mod == 5)
            ++count5;
        else if (mod == 6)
            ++count6;
        else if (mod == 7)
            ++count7;
        else if (mod == 8)
            ++count8;
        else if (mod == 9)
            ++count9;
        else if (mod == 0)
            ++count0;

        number /= 10; // Remove the last digit
    }

    // Output the results
    cout << "Number Of Count Every Single Number Is:\n";
    cout << " 0 : " << count0 << endl;
    cout << " 1 : " << count1 << endl;
    cout << " 2 : " << count2 << endl;
    cout << " 3 : " << count3 << endl;
    cout << " 4 : " << count4 << endl;
    cout << " 5 : " << count5 << endl;
    cout << " 6 : " << count6 << endl;
    cout << " 7 : " << count7 << endl;
    cout << " 8 : " << count8 << endl;
    cout << " 9 : " << count9 << endl;

    return 0;
}
