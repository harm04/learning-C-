// armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 153 is an armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int dup1=n; 
    int dup2 = n;
    int lastdigit;
    int length = 0;
    while (n > 0)
    {
       
        n = n / 10;
        length++;
    }
    while (dup1 > 0)
    {
        lastdigit = dup1 % 10;
        dup1 = dup1 / 10;
        sum = sum + round(pow(lastdigit, length));
    }
    cout << "The sum of the digits raised to the power of the number of digits is: " << sum << endl;
    sum == dup2 ? cout << "The number is an armstrong number" : cout << "The number is not an armstrong number";
}