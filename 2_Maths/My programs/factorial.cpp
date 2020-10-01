#include<iostream>
#include<iomanip>

using namespace std;

void factorial_1(int);

int main(){

    int n;
    cout<<"Enter a number :";
    cin>>n;
    factorial_1(n);
    return 0;
}

void factorial_1(int n){
    int fac=1;
    while(n>0){
        fac=fac*n--;
    }
    cout<<fac;
}