#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}

int main()
{
    srand((unsigned int)time(NULL));
    cout << randomenum(1, 10) << endl;
    cout << randomenum(1, 10) << endl;
    cout << randomenum(1, 10) << endl;

  
    
    return 0;   
    
}
