#include <iostream>
using namespace std;
int main ()
{
 int size;
 int arr[size]; 
 int sum=0;
 double avg;
 cout<<"Enter how many elements do you want"<<endl;
 cin>>size;

 cout<<"Enter "<<size<<" integers:"<<endl; 
 for (int i=0; i<size; i++){   //loop to enter elements of the array
 cout<<"Element"<<i+1<<": ";
 cin>>arr [i]; 
 sum+=arr[i]; //Array Sum
}
 
 avg= (double)sum/size; //Array Average
 cout<<"Sum= "<<sum<<endl;
 cout<<"Average= "<<avg<<endl;
return 0;
}