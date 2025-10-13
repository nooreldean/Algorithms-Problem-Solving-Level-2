#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float mySqrt(int num)
{
    return pow(num,0.5);
    
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
    cout<<"my sqrt result is: "<<mySqrt(number)<<endl;
    cout<<" c++ sqrt result is: "<<sqrt(number)<<endl;

    return 0;

}
