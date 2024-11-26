// 30. Generate All Substrings
// Write a program to generate all possible substrings of a given string using nested for loops.
// Input Example: "abc"
// Output Example:

// a
// ab
// abc
// b
// bc
// c

#include <iostream>
using namespace std;
int main()
{
    string sh;
    cout << "Enter String : ";
    cin >> sh;

    for (int i = 0; i<=sh.length();++i)
    {
        // int one_char = sh.length()%10;
        // cout<<sh[i]<<endl;

        // if(one_char == 1)
        // {
        //     cout<<sh[i];
        // }
        cout<<sh<<endl;
        // sh = sh.length()/10;
        cout<<sh.length()/10<<endl;

    }

            // int one_char = sh.length()%10;
            // cout<<sh[2];
}