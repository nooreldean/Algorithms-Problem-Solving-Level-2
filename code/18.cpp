#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string readtext()
{
    string text;
    cout<<"please enter text\n";
    getline(cin,text);
    return text;
}
string encrypt(string text,short encryptkey)
{
    for (int i=0;i<=text.length();i++)
    {
        text[i]=char(int(text[i])+encryptkey);
    }
    return text;
}
string decrypt(string text,short decryptkey)
{
    for (int i=0;i<=text.length();i++)
    {
        text[i]=char(int(text[i])-decryptkey);
    }
    return text;
}
int main()
{
    cout<<"________________________________\n";
    const short key=2;
    string textafterencryption,textafterdecryption;
    string text=readtext();
    textafterencryption=encrypt(text,key);
    textafterdecryption=decrypt(textafterencryption,key);
    cout<<"________________________________\n";
    cout<<"text before encryption: "<<text<<endl;
    cout<<"text after encryption: "<<textafterencryption<<endl;
    cout<<"text after decryption: "<<textafterdecryption<<endl;
    cout<<"________________________________\n";
  
    
    return 0;   
    
}
