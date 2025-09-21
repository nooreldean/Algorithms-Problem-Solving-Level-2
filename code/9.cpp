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

void printalldigitfrequency(int num)
{
    cout << "----------------------------------------------------------------------------------------------------\n";
    for(int i=0;i<=9;i++)
    {
        short digitfrequency=0;
        digitfrequency=countdigitfrequency(num,i);
        if (digitfrequency>0)
        {
        cout<<"\ndigit "<<i<<" frequency number in "
        <<num<<" is: "<<digitfrequency<< " time(s)" <<endl;
        
    }

}
    cout << "----------------------------------------------------------------------------------------------------\n";
}



int main()
{
    int number=readpositivenumber("Please enter a positive number:");
    printalldigitfrequency(number);
  
    
    return 0;   
    
}
