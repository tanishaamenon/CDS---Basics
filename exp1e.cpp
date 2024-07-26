#include <iostream>
using namespace std;

int main()
{
    int y;
    cout << "Enter a year: ";
    cin >>y;
    if (y % 400 == 0 or y % 4 == 0 and y % 100 != 0)
    {
        cout << "It is a leap year. ";
    }
    else
    {
        cout << "It is not a leap year. ";
    }
    return 0;
}

/*
Output:
Enter a year: 1800
It is not a leap year. 
*/
