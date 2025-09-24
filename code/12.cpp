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
    for(int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        
    }
    cout << "\n________________________________________\n";
}


int main()
{
    cout << "_________________________________________\n";
    printinvertednumpatern(readpositivenumber("please enter a positeve num"));
    
    
    return 0;   
    
}
