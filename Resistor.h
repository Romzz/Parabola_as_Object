#ifndef RESISTOR_H
#define RESISTOR_H
#include <string>
#include <math.h>


using namespace std;


class Resistor
{
    public:
        Resistor();
        virtual ~Resistor();
        string name;
        int x;
        void set_values (float,float,float);
        float y (); //{returns (a*x*x+b*x+c);}
        float discriminant ();//{returns (b*b-4*a*c);}
        float extremum_x();
        float sqrt_d();
        float rootplus();
        float rootminus();

    protected:
    private:
            float a, b, c;
};

#endif // RESISTOR_H
