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

void pattern3(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
void pattern4(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void pattern5(){
    int x;
    cout<<"Enter a number: ";
    cin >> x;
    for (int i = x; i >= 0;i--){
        for (int j = 0; j < i;j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern6(){
    int x;
    cout<<"Enter a number: ";
    cin >> x;
    for (int i = x; i >= 0;i--){
        for (int j = 0; j < i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int pattern;
    cout << "Enter pattern number (1 - 6): ";
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
    default:
    {
        cout << "Invalid input";
        break;
    }
    }
    return 0;
}