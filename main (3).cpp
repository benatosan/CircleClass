#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class MyCircle{
        protected:
            double radius = 1;
            string units = "units";
            static int numCircle;
        
        public: 
            static double PI;
            MyCircle(double r, string u){
                radius = r; units = u;
            }
            MyCircle(double r){
                radius = r;
            }
            MyCircle(){
            }
            static int getNumCircles(){
                return numCircle;
            }
            void setRadius(double r);
            void setUnits(string u){
                units = u;
            }
            double getRadius(){
                return radius;
            }
            double getDiameter(){
                return radius + radius;
            }
            string getUnits(){
                return units;
            }
            double getCircumference(){
                return 2*PI*radius;
            }
            double getArea(){
                return PI*(pow(radius, 2));
            }
            bool equals(MyCircle c){
                return (c.radius == radius && c.units == units);
            }
            void printString(){
                cout << "Radius = " << getRadius() << " " << units << endl;
                cout << "Circumference = " << getCircumference() << " " << units << endl;
                cout << "Diameter = " << getDiameter() << " " << units << endl;
                cout << "Area = " << getArea() << " " << units << endl << endl;
            }
            static double getCircumference(double r){
                return 2*PI*r;
            }
            static double getArea(double r){
                return PI*(pow(r, 2));
            }
    };

    double MyCircle::PI = 3.14159265359;
    int MyCircle::numCircle = 1;
int main() {
    MyCircle circle(2.0);
    MyCircle circle2 = MyCircle(2.0, "meters");
    MyCircle circle3 = MyCircle();
    circle.setUnits("meters");
    circle.setRadius(1.0);

    circle.printString();
    circle2.printString();
    if (circle.equals(circle2)){
        cout << "These circles are equal" << endl;
    } else {
        cout << "These circles are not equal" << endl;
    }
    cout << circle.getCircumference(2.0) << endl;
    cout << circle.getArea(2.0) << endl;

}

void MyCircle::setRadius(double r){
    radius = r;
}