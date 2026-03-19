#include    <iostream>
using namespace std;

int main(){
    int arr[7];
     for (int i = 0; i < 7;i++){
        cout<< "enter "<< i << " element: ";
        cin>> arr[i];
    }
   
    for (int i = 0; i < 7;i++){
        cout<< arr[i] <<endl;
    }
    cout << "adding 10 to 5th element: "<< arr[4] + 10 <<endl;
    

    string s = "harsh";
    int length= s.size();
    cout << "length of string: "<< length <<endl;   
    cout<<"the 3rd element in the string is: "<< s[2] <<endl;
}
