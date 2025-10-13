#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float myabs(float num)
{
    if (num > 0)
    {
        return num;
    }
    return num*-1;
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
    cout<<"my abs result is: "<<myabs(number)<<endl;
    cout<<" c++ abs result is: "<<abs(number)<<endl;

    return 0;

}
