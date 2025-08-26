#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readpositivenumber(string message)
{
    int num=0;
    do
    {
        cout <<"---------------------------------------------------------------------------------------------------\n";
        cout << message << "\n";

        cin >> num;
    }while(num<=0);
    return num;
}
void printdigits(int num)
{
   int remender=0;
   cout << "----------------------------------------------------------------------------------------------------\n";
   while(num>0)
   {
       remender=num%10;
       num=num/10;
       cout << remender<<endl;
   }
   cout << "----------------------------------------------------------------------------------------------------\n";
}


int main()
{
    printdigits(readpositivenumber("Please enter a positive number:"));
  
    
    return 0;   
    
}
