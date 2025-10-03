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




void printarray(int arr[100],int arrlength)
{
    for(int i=0;i<arrlength;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int sumofarray(int arr[100],int arrlength)
{
    int sum=0;
    for(int i=0;i<arrlength;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    srand((unsigned int)time(NULL));
    int arr[100],arrlength;
    fillarraywithrandom(arr,arrlength);
    cout<<"\nArray elements are:\n";
    printarray(arr,arrlength);
    int sum=sumofarray(arr,arrlength);
    cout<<"\nSum of the elements in the array is: "<<sum<<endl;
  
    
    return 0;   
    
}
