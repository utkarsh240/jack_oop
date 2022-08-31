

#include<iostream>
using namespace std;

class dis
{
    int feet,inches;
public:
    void input()
    {
        cout<<"\nEnter the value of feet: ";
        cin>>feet;
        cout<<"\nEnter the value of inches: ";
        cin>>inches;
    }
    void add(dis &C1,dis &C2)
    {
        feet=C1.feet+C2.feet;
        inches=C1.inches+C2.inches;
        if(inches>=12)
        {
            feet+=inches/12;
            inches=inches%12;
        }
    }
    void display()
    {
        cout<<"\nThe value of distance is: "<<feet<<" feet "<<inches<<" inches";
    }
};

int main()
{
    dis C1,C2,C3;
    C1.input();
    C2.input();
    C3.add(C1,C2);
    C3.display();
    return 0;
}