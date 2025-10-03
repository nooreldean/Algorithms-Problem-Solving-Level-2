#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
int readpositivenumber(string message)
{
    cout<<endl;
    int num=0;
    do
    {
        
        cout << message << "\n";

        cin >> num;
    }while(num<=0);
    return num;
}
void fillarraywithrandom(int arr[100],int arrlength)
{

    for(int i=0;i<arrlength;i++)
    {
        arr[i]=randomenum(1,100);
    }
}
void sumofarray(int arr1[100],int arr2[100],int arrsum[100],int arrlength)
{
    for (int i=0;i<arrlength;i++)
    {
        arrsum[i]= arr1[i]+arr2[i];
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
    int arr[100],arr2[100],arrsum[100];
    int arrlength=readpositivenumber("Enter the length of the arrays");
    fillarraywithrandom(arr,arrlength);
    fillarraywithrandom(arr2,arrlength);
    sumofarray(arr,arr2,arrsum,arrlength);
    cout<<"The first array is : ";
    printarray(arr,arrlength);
    cout<<"The second array is : ";
    printarray(arr2,arrlength);
    cout<<"The sum array is : ";
    printarray(arrsum,arrlength);
    return 0;
}