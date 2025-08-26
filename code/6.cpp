#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readpositivenumber(string message)
{
    int num=0;
    do
    {
        
        cout << message << "\n";

        cin >> num;
    }while(num<=0);
    return num;
}
int sumofdigits(int num)
{
    int sum=0;
    int remender=0;
    while(num>0)
    {
        remender=num%10;
        num=num/10;
        sum+=remender;
    }
    return sum;
}


int main()
{
  
    cout << "----------------------------------------------------------------------------------------------------\n";
    int number = readpositivenumber("Please enter a positive number:");
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout << "Sum of digits: " << sumofdigits(number) << endl;

    cout << "----------------------------------------------------------------------------------------------------\n";


    
    
    return 0;   
    
}
