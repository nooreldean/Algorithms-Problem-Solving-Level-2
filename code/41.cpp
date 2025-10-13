#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void fillarray(int arr[100], int &length)
{
    length=6;

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=30;
    arr[4]=20;
    arr[5]=10;
    
}

void printarray(int arr[100], int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isplandromarray(int arr[100],int length)
{
for(int i=0;i<length;i++)
{
    if (arr[i]!= arr[length-i-1])
    {
        return false;
    }
}
    return true;
}



int main()
{
    int arr[100];
    int length=0;
    fillarray(arr,length);
    cout << "\nArray Elements:\n";
    printarray(arr, length);

if (isplandromarray(arr, length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";
  
    
    return 0;   
    
}
