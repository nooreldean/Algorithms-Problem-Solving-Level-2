#include <iostream>
#include <string>
#include <cmath>
using namespace std;
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
int reverseanumber(int num)
{
    int reversednumber=0;
    int remender=0;
    while(num>0)
    {
        remender=num%10;
        num=num/10;
        reversednumber=reversednumber*10+remender;
    
    }
    return reversednumber;
}
void countdigitfrequency(int num)
{
    int remender=0;
    while(num>0)
    {
        remender=num%10;
        num=num/10;
        cout << remender << endl;
        
       
    }
}


int main()
{
    cout <<"__________________________________________________________________\n";
   countdigitfrequency(reverseanumber(readpositivenumber("Please enter a positive number:")));
    cout <<"__________________________________________________________________\n";
  
    
    return 0;   
    
}
