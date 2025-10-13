#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readnum ()
{
    int num;
    cout<<"\n please enter a num  ";
    cin>>num;
    return num;
}
void addarrayelemint(int num ,int arry[100],int& arrylenth )
{
    arrylenth++;
    arry[arrylenth-1]=num;
}
void inbutyousernuminarry (int arry[100],int& arrylenth)
{
    bool addmore=true;
    do
    {
       addarrayelemint(readnum(),arry,arrylenth);
       cout<<"\n Do you want add more numbers? [0]No,[1]yes?";
       cin>>addmore;
    } while (addmore);
    
}

void printarray(int arr[100], int &arrlen)
{
    for (int i = 0; i < arrlen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
  int arry[100], arrylenth=0;
inbutyousernuminarry(arry,arrylenth);
cout <<"\n array length  "<<arrylenth<<endl;
cout<<"array elements: ";
printarray(arry,arrylenth);
    return 0;

}
