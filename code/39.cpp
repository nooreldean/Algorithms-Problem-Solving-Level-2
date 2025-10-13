#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enprime{prime=1,notprime=2};
enprime checkprime(int num)
{
    int m=round(num/2);
    for (int counter=2;counter<=m;counter++)
    {
        if(num%counter==0)
        {
            return enprime::notprime;
        }
    }
    return enprime::prime;
}
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
void fillarraywithrandom(int arr[100],int &arrlength)
{
    cout<<"\nEnter the number of elements: \n";
    cin>>arrlength;

    for(int i=0;i<arrlength;i++)
    {
        arr[i]=randomenum(1,100);
    }
    cout<<endl;
}



void printarray1(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void addarrayelemint(int num ,int arry[100],int& arrylenth )
{
    arrylenth++;
    arry[arrylenth-1]=num;
}

void copyprimearraywithaddarrayelemint(int arry1[100],int arry2[100],int arrylength,int &arry2length)
{
    for (int i=0;i<arrylength;i++)
    {
        if(checkprime(arry1[i])==enprime::prime)
        addarrayelemint(arry1[i],arry2,arry2length);
    }
}


int main()
{
   srand((unsigned int)time(NULL));
    int arry[100],arrlength=0;
    fillarraywithrandom(arry,arrlength);
    int arry2[100],arry2length=0;
    copyprimearraywithaddarrayelemint(arry, arry2 ,arrlength , arry2length);


    cout<<"\nFirst Array elements are:\n";
    printarray1(arry,arrlength);
     cout<<"\nodd elements of First Array copied to Second Array are:\n";
    printarray1(arry2, arry2length);
  
    return 0;
}
