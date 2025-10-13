#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void fillarray(int arr[100], int &length)
{
    length=10;

    arr[0]=10;
    arr[1]=10;
    arr[2]=10;
    arr[3]=50;
    arr[4]=50;
    arr[5]=70;
    arr[6]=70;
    arr[7]=70;
    arr[8]=70;
    arr[9]=90;
    
}

void printarray(int arr[100], int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

short findnumpossitveinarray(int num,int arr[100],int length)
{
    short count=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]==num)
        {
           return i;
        }
    }
    return -1;
}

bool isnuminarray(int num,int arr[100],int length)
{
    return findnumpossitveinarray(num,arr,length)!=-1;
}

void addarrayelem(int num ,int arry[100],int& arrylenth )
{
    if(!isnuminarray(num,arry,arrylenth))
    {
        arrylenth++;
        arry[arrylenth-1]=num;
    }
}

void copydistinctarray(int arry1[100],int arry2[100],int arrylength,int &arry2length)
{
    for (int i=0;i<arrylength;i++)
    {
       if(!isnuminarray(arry1[i],arry2,arry2length))
       {
           addarrayelem(arry1[i],arry2,arry2length);
       }
    }
}

int main()
{
    int arry[100],arrlength=0,arry2[100],arry2length=0;
    fillarray(arry,arrlength);
    cout<<"Array 1: \n";
    printarray(arry,arrlength);
    copydistinctarray(arry,arry2,arrlength,arry2length);
    cout<<"Array 2: \n";
    printarray(arry2,arry2length);

    return 0;

}
