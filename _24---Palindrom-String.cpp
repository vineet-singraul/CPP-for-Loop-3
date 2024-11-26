// 22. Palindrome String Check
// Write a program to check if a given string is a palindrome using a for loop.
// Input Example: "radar"
// Output Example: Palindrome

#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter String : ";
    cin>>name;
    string NameCopy = name;

    for(int i = name.length(); i>=0;i--)
    {
        cout<<name[i]<<" ";
    }
  
     cout<<endl;
    if(name == NameCopy)
    {
       cout<<"Entered Name Is Palindrom String :";
    }
    else{
       cout<<"Entered Name Is Not Palindrom String :";
    }
   
}