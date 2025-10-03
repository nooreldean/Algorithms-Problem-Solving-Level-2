#include <iostream>
#include <string>
#include <cmath>
using namespace std;
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
        cout<<endl;
    }
}
void copyarray(int arr1[100],int arr2[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        arr2[i]=arr1[i];
    }
}


int main()

{
    srand((unsigned int)time(NULL));
    int arr1[100],arr2[100],arrlength;
    fillarraywithrandom(arr1,arrlength);
    copyarray(arr1,arr2,arrlength);
    cout<<"\nFirst Array elements are:\n";
    printarray1(arr1,arrlength);
    cout<<"\nSecond Array elements are:\n";
    printarray1(arr2,arrlength);
  
    
    return 0;   
    
}
