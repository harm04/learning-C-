#include<iostream>
using namespace std;


//function to print pattern
void pattern1(){
    int x;
    cout<<"Enter a number: ";
    cin >> x;
    for (int i = 0; i < x;i++){
        for (int j = 0; j < x;j++){
            cout << " * ";
        
        }
        cout << endl;
    }
}
void pattern2(){
    int x;
    cout<<"Enter a number: ";
    cin >> x;

    for (int i = 0; i < x;i++){
        for (int j = 0; j < i + 1;j++){
            cout << " * ";
        
        }
        cout << endl;
    }
}
int main(){
    pattern1();
    pattern2();
    return 0;

}