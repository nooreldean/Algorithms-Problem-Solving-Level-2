#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float myround(float num)
{
    if(num-(int)num<0.5)
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
    cout<<"my round result is: "<<myround(number)<<endl;
    cout<<" c++ round result is: "<<round(number)<<endl;

    return 0;

}
