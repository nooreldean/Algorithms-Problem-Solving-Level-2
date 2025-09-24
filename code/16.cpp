#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void printwordsfromeAAAtoZZZ()
{
    cout << "_____________________________________________\n";
    string word="";
    for(int i=65;i<=90;i++)
    {
        for(int j=65;j<=90;j++)
        {
            for(int k=65;k<=90;k++)
            {
                word=word+char(i);
                word=word+char(j);
                word=word+char(k);
                cout<<word<<endl;
                word="";

            }
        }
        cout<<"______________________________________________\n";
    }
}


int main()
{
    printwordsfromeAAAtoZZZ();
  
    
    return 0;   
    
}
