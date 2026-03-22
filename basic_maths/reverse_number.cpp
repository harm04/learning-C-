#include <iostream>
using namespace std;

int main(){
    int n;
    int lastdigit;
    int reverse=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
       lastdigit = n%10;
        n=n/10;
        reverse=(reverse*10)+lastdigit;
    }
    cout<<"Reverse of the number is: "<<reverse<<endl;
}