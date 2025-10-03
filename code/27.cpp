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
int sumnarray(int arr[100],int arrlength)
{
    int sum=0;
    for(int i=0;i<arrlength;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
float averageofarray(int arr[100],int arrlength)
{
    int sum=sumnarray(arr,arrlength);
    float average=(float)sum/arrlength;
    return average;
}

int main()
{
    srand((unsigned int)time(NULL));
    int arr[100],arrlength;
    fillarraywithrandom(arr,arrlength);
    cout<<"\nArray elements are:\n";
    printarray(arr,arrlength);
    float average=averageofarray(arr,arrlength);
    cout<<"\nAverage of the elements in the array is: "<<average<<endl;
  
    
    return 0;   
    
}
