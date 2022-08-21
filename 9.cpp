//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;
    x > y ? cout << "grater is " << x : cout << "grater is " << y;
}