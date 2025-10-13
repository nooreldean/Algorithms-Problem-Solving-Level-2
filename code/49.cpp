#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float getmyfunctionpart(float num)
{
  return num - (int)num;
}
int myceil(float num)
{
    if(getmyfunctionpart(num)==0)
    {
        return (int)num;
    }
    return (int)num+1;
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
    cout<<"my ceil result is: "<<myceil(number)<<endl;
    cout<<" c++ ceil result is: "<<ceil(number)<<endl;
  
    
    return 0;   
    
}
