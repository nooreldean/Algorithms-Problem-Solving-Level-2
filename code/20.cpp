#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
enum enchartype{smallletter=1,capitalletter=2,spechalchar=3,number=4};

char generaterandomchar(enchartype chartype)
{
    switch (chartype)
    {
    case enchartype::smallletter:
    {
        return (char)randomenum(97, 122);
        break;
    }
    case enchartype::capitalletter:
    {
        return (char)randomenum(65, 90);
        break;
    }
    case enchartype::spechalchar:
    {
        return (char)randomenum(33, 47);
        break;
    }
    case enchartype::number:
    {
        return (char)randomenum(48, 57);
        break;
    }
    }
    return '\0';
}

int main()
{
   srand((unsigned int)time(NULL));
   cout << generaterandomchar(enchartype::smallletter) << endl;
   cout << generaterandomchar(enchartype::capitalletter) << endl;
   cout << generaterandomchar(enchartype::spechalchar) << endl;
   cout << generaterandomchar(enchartype::number) << endl;
    
    return 0;   
    
}
