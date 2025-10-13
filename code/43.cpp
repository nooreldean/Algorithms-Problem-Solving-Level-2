#include <iostream>
#include <string>
#include <cmath>
using namespace std;
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
int evenecount(int arr[100], int arrlen)
{
    int count=0;
    for (int i = 0; i < arrlen; i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    return count;
}


int main()
{
     srand((unsigned)time(NULL));
    int arr[100], arrlen,number;
    fillarraywithrandomnumbers(arr, arrlen);
    cout << "array elements:\n";
    printarray(arr, arrlen);
    cout << "even numbers count is: ";
    cout <<evenecount(arr, arrlen)<<endl;

    return 0;

}
