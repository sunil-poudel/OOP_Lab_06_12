/* 4.	WAP to calculate the area of cube, rectangle,
circle using function overloading with at least one default argument. */
#include <iostream>
using namespace std;
int area(double side=1){
    return 6*side*side;
}
int area(int length=1, int breadth=1){
    return length*breadth;
}
int area(float radius=1){
    float pi = 3.14;
    return pi*radius*radius;
}

int main(){
    double areaOfCube = area((double)10);
    int areaOfRectangle = area(23,10);
    float areaOfCircle = area((float)14);
    cout<<"area of cube: "<<areaOfCube<<endl;
    cout<<"area of rectangle: "<<areaOfRectangle<<endl;
    cout<<"area of circle: "<<areaOfCircle<<endl;
}
