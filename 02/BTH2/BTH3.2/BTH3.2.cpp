#include<iostream>
#include"TamGiac.h"
using namespace std;

int main() {
    Triangle TriangleA; //call default constuctor
    Coordinate c1(3, 4);
    Coordinate c2(-1, 2);
    Coordinate c3(6, 5);
    Triangle TriangleB(c1, c2, c3); //Call contructor
    cout << "Show Triangle A (after constructor): " << TriangleA << endl;
    cout << "Show Triangle B (after constrcutor):" << TriangleB << endl;
    cout << "Set Triangle A :" << endl;
    TriangleA.InputTriangle();
    cout << "Move Triangle 2 (-5,7)!" << endl;
    TriangleB.MoveTriangle(-5, 7);
    cout << "Show Triangle A (after set angle): " << TriangleA << endl;
    cout << "Show Triangle B (after move (-5,7)):" << TriangleB << endl;
    cout << "Zoom in 5 value Triangle A! " << endl;
    TriangleA.ZoomTriangle(5);
    cout << "Rotate triangle B 30 degree!" << endl;
    TriangleB.RotateTriangle(90);
    cout << "Show Triangle A (after Zoom in 5): " << TriangleA << endl;
    cout << "Show Triangle B (after Rotate 30 degree):" << TriangleB << endl;
    return 0;
}