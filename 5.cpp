//Write a C++ program to calculate the volume of a cuboid
#include<iostream>
using namespace std;
int main(){
    int l, w, h, v;
    cout << "Enter length, width and height: ";
    cin >> l >> w >> h;
    v = l * w * h;
    cout << "volume of a cuboid: " << v;
}