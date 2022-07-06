// Volume of different shapes using function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double VolumeSquare(double length, double width, double height) {
    return length * width * height;
}
double VolumeRectangle(double length, double width, double height) {
    return length * width * height;

}
double VolumeCylinder(double pi, double radius, double height) {

    return 3.142 * (radius * radius) * height;
}
double VolumeCone(double pi, double radius, double height) {
    return 3.142 * (radius * radius) * height/3;
}

int main(){
    double length,radius, height, width; 
 
    double pi = 3.142;
    cout << "Enter your length" << endl;
    cin >> length;
    cout << " Enter your radius " << endl;
    cin >> radius;
    cout << " Enter your height " << endl;
    cin >> height;
    cout << " Enter your width " << endl;
    cin >> width;
    cout << " The volume of square is equals to: " << VolumeSquare(length, width, height) << endl;
    cout << " The volume of rectangle is equals to: " << VolumeRectangle(length, width, height) << endl;
    cout << " The volume of cylinder is equals to: " << VolumeCylinder(pi,radius, height) << endl;
    cout << " The volume of cone is equals to: " << VolumeCone(pi, radius, height) << endl;

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
