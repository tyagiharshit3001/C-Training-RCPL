#include<bits/stdc++.h>
using namespace std;
class H{
    int num1;
    int num2;
    int res;
    void input();
    void sum();
    void sub();
    void mul();
    void div();
};

void H::input(){
    cout<<"Enter first number: ";cin>>num1;
    cout<<"Enter second number: ";cin>>num2;
}



void H::sum(){
    res = num1 + num2;
    cout<<"Result = "<<res;
}


void H::sub(){
    res = num1 - num2;
    cout<<"Result = "<<res;
}


void H::mul(){
    res = num1 * num2;
    cout<<"Result = "<<res;
}

void H::div(){
    res = num1 / num2;
    cout<<"Result = "<<res;
}
