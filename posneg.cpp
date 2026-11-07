#include <iostream>
using namespace std;
int main()
{
 int a;
 cout<<"Enter a number to check if positive or negative"<<endl;
 cin>>a;
 if (a>0){
 cout<<a<<" Is a positive number";
}
 else if (a<0){
 cout<<a<<" Is a negative number";
}
else{
cout<<a<<" Is zero";
}
return 0;
}