#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    count == 2 ? cout << "The number is a prime number" : cout << "The number is not a prime number";
}
//time complexity: O(n) where n is the input number, because we are iterating through all numbers from 1 to n to check for divisibility.