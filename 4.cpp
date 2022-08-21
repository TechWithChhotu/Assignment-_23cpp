// Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main(){
    float a, r;
    cout << "Enter redius of a circle: ";
    cin >> r;
    a = 3.14 * r * r;
    cout << "area of circle is %d " << a;
}