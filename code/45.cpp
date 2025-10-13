#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int randomnumber(int from, int to)
{
    int randomnum = rand() % (to - from + 1) + from;
    return randomnum;
}

void fillarraywithrandomnumbers(int arr[200], int &arrlen)
{
    cout <<"enter number of elements:\n";
    cin >> arrlen;
    for (int i = 0; i < arrlen; i++)
    {
        arr[i] = randomnumber(-100, 100);
    }
}

void printarray(int arr[200], int &arrlen)
{
    for (int i = 0; i < arrlen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int negativecount(int arr[200], int arrlen)
{
    int count=0;
    for (int i = 0; i < arrlen; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[200], arrlen,number;
    fillarraywithrandomnumbers(arr, arrlen);
    cout << "array elements:\n";
    printarray(arr, arrlen);
    cout << "negative numbers count is: ";
    cout <<negativecount(arr, arrlen)<<endl;

    return 0;

}
