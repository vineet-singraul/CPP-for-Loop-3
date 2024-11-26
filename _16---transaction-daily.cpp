// ### 3. **Simulate Banking Transactions with Interest Calculation**
//    Develop a program that calculates the balance of multiple accounts over a period. Given an initial balance, daily deposits, withdrawals, and a monthly interest rate:
//    - Use nested `for` loops to simulate daily transactions and apply interest monthly.
//    - Report the balance at the end of each month and detect any days with low balances (e.g., below a certain threshold).
#include <iostream>
using namespace std;
int main()
{
    int Total_balance = 2000;
    int deposited_money, withdrown_money;
    string ch = "true";
    int count=0;
    for (;; ch)
    {
        cout << "Enter Deposite Ammount : ";
        cin >> deposited_money;
        Total_balance = Total_balance + deposited_money;
        cout << Total_balance << endl;
        cout << "Enter Withdrowne Ammount : ";
        cin >> withdrown_money;
        Total_balance = Total_balance - withdrown_money;
        cout << Total_balance<<endl;
        cout << endl;

        ++count;
        cout<<"Day "<<count<<" Transaction Balance IS : "<<endl;

        cout << "Do You Want To More Treansection:Press Yas else press No :";
        cin >> ch;
        if (ch == "y")
        {
            ch = true;
        }
        else
            break;
    }
}