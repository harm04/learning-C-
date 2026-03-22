#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;

    while (n > 0)
    {
        n % 10;
        n = n / 10;
        count += 1;
    }
    cout << "Number of digits: " << count << endl;
}

//time complexity: O(log₁₀ n) where n is the input number, because we are dividing the number by 10 in each iteration of the loop.