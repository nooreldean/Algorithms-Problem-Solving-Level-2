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

void copyarrayreverseorder(int arr[100], int arrlen, int arr2[100])
{
    for (int i = 0; i < arrlen; i++)
    {
        arr2[i] = arr[arrlen - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlen;
    fillarraywithrandomnumbers(arr, arrlen);
    int arr2[100];

    copyarrayreverseorder(arr, arrlen, arr2);
    cout << "original array:\n";
    printarray(arr, arrlen);
    cout << "reversed array:\n";
    printarray(arr2, arrlen);
    return 0;
}

