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
bool isperfectnumber(int num)
{
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
      if (num%i==0)
      {
          sum+=i;
      }
      
    }
   
    return num==sum;
}
void printresult(int num)
{
    if(isperfectnumber(num))
    {
        cout << num << ": is a perfect number\n";
    }
    else
    {
        cout << "----------------------------------------------------------------------------------------------------\n";
        cout << num << ": is not a perfect number\n";
        cout << "----------------------------------------------------------------------------------------------------\n";
    }
}
int main()
{
    printresult(readpositivenumber("Enter a positive number:"));
  
    
    return 0;   
    
}
