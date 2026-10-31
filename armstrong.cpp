#include <iostream>
using namespace std;
int main()
{
int num,originalNum,rem,result=0;
cout<<"Enter a integer";
cin>>num;
originalNum=num;
while (originalNum!=0)
{
 rem=originalNum%10;
 result+=rem*rem*rem;
 originalNum=originalNum/10;
}
if (result==num)
cout<<"The number is an Armstrong number"<<num<<endl;
else
cout<<"The number is not an Armstrong number"<<num<<endl;
return 0;
}
