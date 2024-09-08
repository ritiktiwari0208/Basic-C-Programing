#include<iostream>
using namespace std;

int main(){
    int a=8;//dividend
    int b=3;//divisor
    int q=a/b;//quotient
    int r;//remainder
    r=a-(b*q);
    cout<<r;
}