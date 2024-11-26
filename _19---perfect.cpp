#include <iostream>
using namespace std;
int main() {
int number;
cout<<"enter number";
cin>>number;
  int sum=0;
for(int i=1;i<number;++i)
{
  
    if(number%i==0)
    {
      cout<<i<<" "<<" ";
      sum=sum+i;
    }
}
cout<<endl;
if(sum==number)
{
    cout<<"perfect";
} 
else{
 cout<<"no perfect";
}   
 
}
