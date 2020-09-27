#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,count=0;
    cout<<"hello world";    
    cout<<"\nGive me a number :";
    cin>>a;
    while(a>0){
        a=a/10;
        count++;
    }
    cout<<"the count is : "<<count<<"\n";
    return 0;
    
}
