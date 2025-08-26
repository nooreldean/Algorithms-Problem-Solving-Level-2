#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enprimenotprime {prime=1,notprime=2};
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
enprimenotprime checkprime(int num)
{
    int M=round(num/2);
    for (int counter=2;counter<=M;counter++)
    {
        if(num%counter==0)
        {
            return enprimenotprime::notprime;
        }
    }
    return enprimenotprime::prime;
}
void printprimenumbersfrom1toN(int num)
{
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout << "prime numbers from "<< 1 << " to " << num ;
    cout << " are: \n";
    for (int i = 1; i <= num; i++)
    {
        
        if(checkprime(i)==enprimenotprime::prime)
        {
            cout << i << endl;
            
        }
    }
}

int main()
{
    printprimenumbersfrom1toN(readpositivenumber("please enter a positive number: "));  
    cout << "----------------------------------------------------------------------------------------------------\n";
  
    
    return 0;   
    
}
