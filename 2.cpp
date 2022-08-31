
#include <iostream>
using namespace std;

class A
{
    int a,count1=0,count2=0;
public:
    void input()
    {
        cout<<"\nEnter the value of a: ";
        cin>>a;
        count1++;
    }
    void output()
    {
        cout<<"\nThe value of a is: "<<a;
        count2++;
    }
    void show()
    {
        cout<<"\nNumber of times input() is called: "<<count1;
        cout<<"\nNumber of times output() is called: "<<count2;
    }
};

int main()
{
    A obj;
    obj.input();
    obj.output();
    obj.show();
    return 0;
}