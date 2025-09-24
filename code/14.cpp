#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readpositivenumber(string message)
{
    cout<<endl;
    int num=0;
    do
    {
        
        cout << message << "\n";

        cin >> num;
    }while(num<=0);
    return num;
}
void printinvertednumpatern(int num)
{
    cout << "\n_______________________________________\n";
    cout <<endl;
    for(int i = 65+num-1; i >= 65; i--)
    {
        for (int j = 1; j <= num-(65+num-1-i); j++)
        {
            cout << char(i);
        }
        cout << endl;
        
    }
    cout << "\n________________________________________\n";
}


int main()
{
    cout << "_________________________________________\n";
    printinvertednumpatern(readpositivenumber("please enter a positeve number"));
  
    
    return 0;   
    
}
