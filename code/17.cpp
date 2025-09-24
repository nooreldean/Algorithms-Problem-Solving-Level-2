#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string readpass()
{
    string pass;
    cout<<"please enter a 3-letter password (all capital)\n";
    cin>>pass;
    return pass;
}
bool guesspass(string origenalpass)
{
    string word="";
    int counter=0;
    cout<<"________________________________\n";
    for (int i=65; i<=90;i++)
    {
        for(int j=65;j<=90;j++)
        {
            for(int k=65; k<=90;k++)
            {
                counter++;
                word=word+char(i);
                word=word+char(j);
                word=word+char(k);
                cout<<"trail["<<counter<<"]:"<<word<<endl;
                if(word==origenalpass)
                {
                    cout<<"________________________________\n";
                    cout <<"password is "<<word<<endl;
                    cout <<"found after "<<counter<<" trail(s)\n";
                    return true;
                }
                word="";
            }
        }
        }
        return false;
    
}

int main()
{
    cout<<"________________________________\n";
    guesspass(readpass());
    cout<<"________________________________\n";
    
    return 0;   
    
}
