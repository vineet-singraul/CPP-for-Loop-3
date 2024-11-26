#include <iostream>
using namespace std;
int main() {
int digit;
int sum=0;
int number=133;
int cpy=number;
for(;number!=0;)
{
    digit=number%10;
    sum=sum+digit*digit*digit;
    number=number/10;
}
if(sum==cpy)
cout<<"armstrong";

else
cout<<"not armstrong";


}