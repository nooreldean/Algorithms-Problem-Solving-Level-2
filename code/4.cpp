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
        cout << "----------------------------------------------------------------------------------------------------\n";
    }while(num<=0);
    return num;
}
bool isprime(int num)
{
    int sum=0;
    for (int i = 1; i < num; i++)
    {
      if (num%i==0)
      {
          sum+=i;
      }
      
    }
    return num==sum;
}
void printprimenumbersfrom1toN(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if(isprime(i))
        {
            cout << i << endl;
    
        }
    }
}


int main()
{
    printprimenumbersfrom1toN(readpositivenumber("Enter a positive number:"));
    cout << "----------------------------------------------------------------------------------------------------\n";

  
    
    return 0;   
    
}
