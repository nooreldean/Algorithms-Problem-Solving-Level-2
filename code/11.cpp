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
int reverseanumber(int num)
{
    int reversednumber=0;
    int remender=0;
    while(num>0)
    {
        remender=num%10;
        num=num/10;
        reversednumber=reversednumber*10+remender;
    
    }
    return reversednumber;
}
bool ispalindromenum(int num)
{
    return num == reverseanumber(num);
}


int main()
{
    cout << "____________________________________\n";
   if ( ispalindromenum(readpositivenumber("Please enter a positive number:")))
   {
   cout << "____________________________________\n";
   cout << "\n yes, it is a palindrome num\n";
   cout << "____________________________________\n";
   }
   else
   { 
   cout << "____________________________________\n";
   cout << "\n no, it is not palindrome num\n";
   cout << "____________________________________\n";
   }
    
    return 0;   
    
}
