#include<iostream>
using namespace std;
void displayChar(char a,int n){
    for(int i=0;i<=n;i++){
        cout<<a;
    }
    cout<<endl;
}
void displayChar(char a){
    for(int i=0;i<=80;i++){
        cout<<a;
    }
    cout<<endl;
}
void displayChar(){
    for(int i=0;i<=80;i++){
        cout<<'*';
    }
}
int main()
{
    int n;char a;int m;
    int x,y;
    cout<<"enter 1 if u want to input the value of n else enter 0: ";
    cin>>x;
    cout<<"enter 1 if u want to input the character else enter 0: ";
    cin>>y;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter character: ";
    cin>>a;
    
    if(x==0&&y==0){
        displayChar();
    }
    if(x==1&&y==1){
        displayChar(a,n);
    }
    if(x==0&&y==1){
        displayChar(a);
    }

    return 0;
}