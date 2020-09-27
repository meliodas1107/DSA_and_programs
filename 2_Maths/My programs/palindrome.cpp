#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int num,i,rev=0;
    cout<<"Enter a number :";
    cin>>num;
    i=num;
    while (i>0)
    {
        rev=rev*10+i%10;
        i=i/10;
        }
    if(rev==num)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
    
        return 0;
}
