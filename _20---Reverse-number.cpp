#include <iostream>
using namespace std;
int main() {
    int number=123;
    int rv=0;
for(;number!=0;)
{
rv=rv*10+number%10;
number=number/10;
}
cout<<rv;




}
