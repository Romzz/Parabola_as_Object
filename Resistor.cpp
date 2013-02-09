#include "Resistor.h"
#include <math.h>
#include <iostream>
#include <cmath>


Resistor::Resistor()
{
    //ctor
}

Resistor::~Resistor()
{
    //dtor
}

void Resistor::set_values (float p, float q,float r )
{
    a = p;
    b = q;
    c = r;
}
float Resistor::extremum_x()
{
    float extremum_x=-b/(2*a);
    return extremum_x;
}
float Resistor::discriminant()
{
    float discriminant=pow(b,2)-(4*a*c);
    return discriminant;
}
float Resistor::y()
{
    float y=a*pow(x,2)+b*x+c;   //funtion for solving the value of y with given values from input (a,b,c)
    return y;
}
float Resistor::sqrt_d()
{
    float sqrt_d=sqrt(discriminant());
    return sqrt_d;
}
float Resistor::rootplus()
{
    float root=(-b+sqrt_d())/2*a;
    return root;
}
float Resistor::rootminus()
{
    float root=(-b-sqrt_d())/2*a;
    return root;
}
