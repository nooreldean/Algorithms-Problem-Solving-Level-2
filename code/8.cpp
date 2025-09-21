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
int countdigitfrequency(int num, int digittocheck)
{
    int count=0;
    int remender=0;
    while(num>0)
    {
        remender=num%10;
        num=num/10;
        if(remender==digittocheck)
        {
            count++;
        }
        
       
    }
    return count;
}

int main()
{
    cout << "----------------------------------------------------------------------------------------------------\n";
    int number=readpositivenumber("Please enter a positive number:");
    short digit=readpositivenumber("Please enter a digit to check :");
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout<<"\ndigit "<<digit<<" frequency number in "
    <<number<<" is: "<<countdigitfrequency(number,digit)<< " time(s)" <<endl;
    cout << "----------------------------------------------------------------------------------------------------\n";
  
    
    return 0;   
    
}
