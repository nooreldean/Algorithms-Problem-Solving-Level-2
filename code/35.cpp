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

int randomnumber(int from, int to)
{
    int randomnum = rand() % (to - from + 1) + from;
    return randomnum;
}

void fillarraywithrandomnumbers(int arr[100], int &arrlen)
{
    cout <<"enter number of elements:\n";
    cin >> arrlen;
    for (int i = 0; i < arrlen; i++)
    {
        arr[i] = randomnumber(1, 100);
    }
}

void printarray(int arr[100], int &arrlen)
{
    for (int i = 0; i < arrlen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int findnumberinarray(int arr[100], int &arrlen, int number)
{
   
    for (int i = 0; i < arrlen; i++)
    {
        if(arr[i]==number)
        {
            return i;
        }
    }
    return -1;
}
int readnum()
{
    int num;
    cout<<"please enter a num to search for:";
    cin>>num;
    return num;
}


int main()
{
  
    srand((unsigned)time(NULL));
    int arr[100], arrlen,number;
    fillarraywithrandomnumbers(arr, arrlen);
    cout << "array elements:\n";
    printarray(arr, arrlen);
   int num=readnum();
   cout << "\nNumber you are looking for is: " << num << endl;
    short NumberPosition = findnumberinarray(arr,arrlen,num);
    if (NumberPosition==-1)
    {
        
        cout << "sorry, the number is not found :(" << endl;
    }

    else
    {
         
         cout << "yes, the number is found :)"<< endl;
    }
    return 0;   
    
}
