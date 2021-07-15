#include<iostream>
#include"DaGiac.h"
using namespace std;

int main() {
    MultiAngle MultiAngleA(3); //constructor 3 angle
    MultiAngle MultiAngleB(4); //constructor 4 angle
    cout << "Show MultiAngle A (after constructor): " << MultiAngleA << endl;
    cout << "Show MultiAngle B (after constrcutor):" << MultiAngleB << endl;
    cout << "Set MultiAngle A ";
    MultiAngleA.InputMultiAngle();
    cout << "Move MultiAngle 2 (-5,7)!" << endl;
    MultiAngleB.MoveMultiAngle(-5, 7);
    cout << "Show MultiAngle A (after set angle): " << MultiAngleA << endl;
    cout << "Show MultiAngle B (after move (-5,7)):" << MultiAngleB << endl;
    cout << "Zoom in 5 value MultiAngle A! " << endl;
    MultiAngleA.ZoomMultiAngle(5);
    cout << "Rotate MultiAngle B 30 degree!" << endl;
    MultiAngleB.RotateMultiAngle(90);
    cout << "Show MultiAngle A (after Zoom in 5): " << MultiAngleA << endl;
    cout << "Show MultiAngle B (after Rotate 30 degree):" << MultiAngleB << endl;
    return 0;
}