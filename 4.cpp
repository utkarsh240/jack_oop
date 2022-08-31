

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"\nEnter the value of a: ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    cout<<"\nBefore swapping: "<<"\na="<<a<<"\nb="<<b;
    swap(a,b);
    cout<<"\nAfter swapping: "<<"\na="<<a<<"\nb="<<b;
    return 0;
}