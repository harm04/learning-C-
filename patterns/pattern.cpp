#include <iostream>
using namespace std;

// function to print pattern
void pattern1()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern2()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern3()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern4()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void pattern5()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = x; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern6()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = x; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern7()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * x - 2 * i - 1; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    for (int i = 0; i < 2 * x - 1; i++)
    {
        int stars = i + 1;
        if (i >= x)
        {
            stars = 2 * x - i - 1;
        }
        for (int j = 0; j < stars; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void pattern10()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    int start = 1;
    for (int i = 0; i < x; i++)
    {
        if (i % 2)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern11()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        // number
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        // space
        for (int j = 2 * x - 2 * i - 1; j > 1; j--)
        {
            cout << " ";
        }
        // number
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern12()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    int num = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void pattern13()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern14(){
    int x;
    cout << "enter a number: ";
    cin >> x;
    for (int i=0;i<x;i++){
        for (char ch='A';ch<='A'+x-i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(){
    int x;
    cout << "enter a number: ";
    cin >> x;
    char c='A';
    for (int i=0;i<x;i++){
        for (char ch ='A';ch<='A'+i;ch++){
            cout<<c<<" ";
          
        }
            c++;
        cout<<endl;
    }
}
int main()
{
    int pattern;
    cout << "Enter pattern number (1 - 15): ";
    cin >> pattern;

    switch (pattern)
    {
    case 1:
    {
        pattern1();
        break;
    }
    case 2:
    {
        pattern2();
        break;
    }
    case 3:
    {
        pattern3();
        break;
    }
    case 4:
    {
        pattern4();
        break;
    }
    case 5:
    {
        pattern5();
        break;
    }
    case 6:
    {
        pattern6();
        break;
    }
    case 7:
    {
        pattern7();
        break;
    }
    case 8:
    {
        pattern8();
        break;
    }
    case 9:
    {
        pattern9();
        break;
    }
    case 10:
    {
        pattern10();
        break;
    }
    case 11:
    {
        pattern11();
        break;
    }
    case 12:
    {
        pattern12();
        break;
    }
    case 13:
    {
        pattern13();
        break;
    }
    case 14:
    {
        pattern14();
        break;
    }
    case 15:
    {
        pattern15();
        break;
    }
    default:
    {
        cout << "Invalid input";
        break;
    }
    }
    return 0;
}