#include<iostream>
using namespace std;

void increment(int &a)
{
    a++;
}

int main()
{
    int a;
    cout<<"\nEnter the value of a: ";
    cin>>a;
    cout<<"\nBefore incrementing: "<<"\na="<<a;
    increment(a);
    cout<<"\nAfter incrementing: "<<"\na="<<a;
    return 0;
}