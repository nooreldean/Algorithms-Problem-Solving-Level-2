#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
void fillarraywithrandom(int arr[100],int arrlength)
{

    for(int i=0;i<arrlength;i++)
    {
        arr[i]=randomenum(1,100);
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

void printarrayidrevresnum(int arrsource[100], int arrdestination[100], int arrlength)
{
    for(int i=0; i<arrlength; i++)
        arrdestination[i] = arrsource[arrlength-1-i];
}


int main()
{
   srand((unsigned)time(NULL));
   int arr[100],arrlenght;
   fillarraywithrandom(arr,arrlenght);
   int arr2[100];
   printarrayidrevresnum(arr,arr2,arrlenght);
   cout<<"\narr 1 elements : \n";
   printarray(arr,arrlenght);
   cout<<"\narr 2 elements : \n";
   printarray(arr2,arrlenght);
  
    
    return 0;   
    
}
