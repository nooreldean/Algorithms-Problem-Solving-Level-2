#include <iostream>
#include <string>
#include <cmath>
using namespace std;

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

void reedarray(int arr[100],int &arrlength)
{
    cout<<"\nEnter the number of elements: \n";
    cin>>arrlength;

    cout<<"\nEnter array elements:\n";


    for(int i=0;i<arrlength;i++)
    {
        cout<<"Element ["<<i+1<<"]: ";
        cin>>arr[i];
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
int timesrepeated(int num,int arr[100],int arrlength)
{
    int count=0;
    for(int i=0;i<=arrlength-1;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    return count;
}
    


int main()
{
    int arr[100];
    int arrlength;
  int numtocheck;
    reedarray(arr,arrlength);
    numtocheck=readpositivenumber("Enter the number you want to check: ");
    cout<<"\noriginal array is: ";
    printarray(arr,arrlength);
    cout<<"\nnumber "<<numtocheck;
    cout<<"is repeated ";
    cout<<timesrepeated(numtocheck,arr,arrlength)<<" time(s)\n";
    
    
    return 0;   
    
}
