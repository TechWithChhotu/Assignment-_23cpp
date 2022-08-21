//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    float ave;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    ave =(a + b + c) / 3.0;
    cout << "Average of three number is " << ave;
}