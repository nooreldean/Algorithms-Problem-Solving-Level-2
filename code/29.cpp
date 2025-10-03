#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enprimenotprime {prime=1,notprime=2};
enprimenotprime checkprime(int num)
{
    int M=round(num/2);
    for (int counter=2;counter<=M;counter++)
    {
        if(num%counter==0)
        {
            return enprimenotprime::notprime;
        }
    }
    return enprimenotprime::prime;
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

void copyonlyprimenum(int arr1[100],int arr2[100],int &arr2length,int arr1length)
{
    int counter=0;
    for(int i=0;i<arr1length;i++)
    {
        if(checkprime(arr1[i])==enprimenotprime::prime)
        {
            arr2[counter]=arr1[i];
            counter++;
        }
    }
    arr2length=--counter;
}


void printarray1(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}



int main()
{
    srand((unsigned int)time(NULL));
    int arr1[100],arr2[100],arr1length,arr2length;
    fillarraywithrandom(arr1,arr1length);
    copyonlyprimenum(arr1,arr2,arr2length,arr1length);
    cout<<"\n Array elements are:\n";
    printarray1(arr1,arr1length);
    cout<<"\n Array only prime elements are:\n";
    printarray1(arr2,arr2length);
    
    return 0;   
    
}
