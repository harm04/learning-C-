// pallindrom is the number which is same when read from left to right and right to left

#include <iostream>
using namespace std;

int main()
{
    int n;

    int lastdigit;
    int reverse = 0;
    cout << "Enter a number: ";
    cin >> n;
    int dup = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + lastdigit;
    }
    reverse == dup ? cout << "The number is a pallindrom" : cout << "The number is not a pallindrom";
}