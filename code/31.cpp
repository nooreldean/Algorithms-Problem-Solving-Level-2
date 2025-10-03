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
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void fillarrayfrome1toN(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        arr[i]=i+1;
    }
}
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
void shufflearray(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        swap(arr[randomenum(1,arrlength)-1],arr[randomenum(1,arrlength)-1]);
    }
}


void printarray(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrlength=readpositivenumber("\n please enter the length of the array: ");
    fillarrayfrome1toN(arr,arrlength);
    cout<<"the array before shuffling is: \n";
    printarray(arr,arrlength);
    shufflearray(arr,arrlength);
    cout<<"the array after shuffling is: \n";
    printarray(arr,arrlength);
    cout << "----------------------------------------------------------------------------------------------------\n";

  
    
    return 0;   
    
}
