#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void printtableheader()
{
    cout << "\n----------------------------------------------------------------------------------------------------\n";
    cout << "\n\n\t\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "  \t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n----------------------------------------------------------------------------------------------------\n";
}
string columsparator(int i)
{
   if (i < 10)
   {
       return " |";
   }
   else
   return " |";
}
void printmultiplicationtable()
{
    printtableheader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " |\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << "\n";
    }
    cout << "\n----------------------------------------------------------------------------------------------------\n";
}


int main()
{
    printmultiplicationtable();
    
    return 0;   
    
}
