#include    <iostream>
using namespace std;
int sum(int a, int b){
    return a + b;
}

int main()
{
cout<<"enter 2 numbers: ";
int a, b;
cin >> a >> b;
cout << "the sum of the 2 numbers is: "<< sum(a,b) <<endl;
}