#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a integer: ";
    cin >> num;
    int sum=0;
    for(int i = 1; i<num ; ++i)
    {
        if(num%i==0)
        {
           sum = sum + i;
        }
    }
    cout<<"Perfect SuM Is :"<<sum;

}




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
      sum=sum+i;
    }
}
if(sum==number)
{
    cout<<"perfect";
} 
else{
 cout<<"no perfect";
}   
 
}
