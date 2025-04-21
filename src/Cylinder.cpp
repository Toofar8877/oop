# ifndef CYLINDER_CPP
# define CYLINDER_CPP
 
# include "Cylinder.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.1415926535897932384626433

using namespace std;
  
double Cylinder :: SurfaceArea(){
    return pi * radius * 2 * (height + radius);
}
 
double Cylinder :: Volume(){
    return (pi * radius * radius * height);
}

double Cylinder :: Circumference(){
    return (pi * 2 * radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume();       
    return out;
}

# endif
