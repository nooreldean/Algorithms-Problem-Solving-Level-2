#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enchartype{smallletter=1,capitalletter=2,spechalchar=3,number=4};

int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}

char generaterandomchar(enchartype chartype)
{
    switch (chartype)
    {
    case enchartype::smallletter:
    {
        return (char)randomenum(97, 122);
        break;
    }
    case enchartype::capitalletter:
    {
        return (char)randomenum(65, 90);
        break;
    }
    case enchartype::spechalchar:
    {
        return (char)randomenum(33, 47);
        break;
    }
    case enchartype::number:
    {
        return (char)randomenum(48, 57);
        break;
    }
    }
    return '\0';
}
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

string generatword(enchartype chartype,int length)
{
    string word;
    for(int i=1;i<=length;i++)
    {
        word+=generaterandomchar(chartype);
    }
    return word;
}

string generatkey()
{
    string key;
    key=generatword(enchartype::capitalletter,4)+"_";
    key=key+generatword(enchartype::capitalletter,4)+"_";
    key=key+generatword(enchartype::capitalletter,4)+"_";
    key=key+generatword(enchartype::capitalletter,4);
    return key;
}
void generatkeys(short numofkeys)
{
    cout<<"\n____________________________________\n";
    for(int i=1;i<=numofkeys;i++)
    {
        cout << "key["<<i<<"]: ";
        cout <<generatkey()<<endl;
    }
    cout<<"\n_____________________________________\n";
}
int main()
{
     srand((unsigned int)time(NULL));
     generatkeys(readpositivenumber("Pleaes enter how many keys to generate? \n"));
  
    
    return 0;   
    
}
