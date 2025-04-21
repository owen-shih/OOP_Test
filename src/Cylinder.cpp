# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
#define pi 3.141592653589793
double Cylinder :: SurfaceArea(){
    double ans=((pi*2.0*radius*radius)+(pi*2.0*radius*height));
    return ans;
}

double Cylinder :: Volume(){
     double ans=(pi*radius*radius*height*1.0);
    return ans;
}

double Cylinder :: Circumference(){
    double ans=(pi*2.0*radius);
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<setprecision(3)<<"Circumference: "<<cldr.Circumference()<<endl<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl<<"Volume: "<<cldr.Volume()<<endl;
    return out;
}

# endif
