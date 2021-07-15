#include<iostream>
#include"Point.h"
using namespace std;
int main() {
    Coordinate Coor1; //call default constuctor
    Coordinate Coor2(2, 3); //Call contructor
    cout << "Show coordinate 1: " << Coor1 << endl;
    cout << "Show coordinate 2:" << Coor2 << endl;
    cout << "Set value to coordinate 1 :";
    cin >> Coor1;
    cout << "Move coordinate 2 (-5,7): " << endl;
    Coor2.MoveCoordinate(-5, 7);
    cout << "Show coordinate 1: " << Coor1 << endl;
    cout << "Show coordinate 2:" << Coor2 << endl;
    return 0;
}