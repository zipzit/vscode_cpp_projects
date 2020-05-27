#include <iostream>
#include "box.h"

using namespace std;

// class Box
// {
// public:
//     double length; //length of the box
//     double height; //height of the box
//     double width;  //with of the box
//     //Declare Member functions
//     double getVolume(void);
//     string getParameters(void);
//     void setLength(double leng);
//     void setWidth(double wid);
//     void setHeight(double hei);
//     double getLength(double length);
//     double getWidth(double width);
//     double getHeight(double height);
// }; //end class

//member function definitions

double Box::getVolume(void) //get volume will cal and output the volume when called
{
    return length * width * height;
}
void Box::setLength(double leng)
{
    length = leng;
}
double Box::getLength(double length)
{
    return length;
}
void Box::setWidth(double wid)
{
    width = wid;
}
double Box::getWidth(double width)
{
    return width;
}
void Box::setHeight(double hei)
{
    height = hei;
}
double Box::getHeight(double height)
{
    return height;
}
void Box::getParameters(void)
{
    cout << "\nLength :" << getLength(length) << endl
         << "Width :" << getWidth(width) << endl
         << "Height :" << getHeight(height) << endl
         <<"\n\n" << endl;
}
