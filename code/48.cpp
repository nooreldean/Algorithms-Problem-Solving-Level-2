#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int myfloor(float num)
{
   if (num >= 0)
   {
       return (int)num;
   }
   else
   {
       if (num == (int)num)
       {
           return (int)num;
       }
       return (int)num - 1;
   }
}
float readnumber()
{
    float number;
    cout << "enter a number:\n";
    cin >> number;
    return number;
}

int main()
{
    float number=readnumber();
    cout<<"my floor result is: "<<myfloor(number)<<endl;
    cout<<" c++ floor result is: "<<floor(number)<<endl;
  
    
    return 0;   
    
}
