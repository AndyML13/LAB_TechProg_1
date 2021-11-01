#pragma once
#include "Figure.h"
class Sphere :
    public Figure
{

private: 
    double volume;
    double radius;

public:
    Sphere();
    ~Sphere() {
        cout << "������ ����������" << endl;
    };
    Sphere(const Sphere&);
    Sphere(double radius, double volume);
    double getSquareOrVolume();
    virtual void changeObject();
    virtual void printToConsole();
    virtual void inputFromConsole();
    void setRadius(double radius);
    double getRadius();
    void calcVolume();
};
