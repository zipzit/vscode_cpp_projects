#include <iostream>

class Box
{
public:
    double length; //length of the box
    double height; //height of the box
    double width;  //with of the box
    //Declare Member functions
    double getVolume(void);
    void getParameters(void);
    void setLength(double leng);
    void setWidth(double wid);
    void setHeight(double hei);
    double getLength(double length);
    double getWidth(double width);
    double getHeight(double height);
}; //end class
