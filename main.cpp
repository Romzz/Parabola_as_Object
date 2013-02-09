#include <iostream>
#include <cmath>
#include "resistor.h"
using namespace std;

int main()
{
    float p,q,r;
    cout << "Enter the Value of the following Coefficients." << endl << endl;
    cout << "The value of A:";
    cin >> p;
    cout << "The value of B:";
    cin >> q;
    cout << "The value of C:";
    cin >> r;
    Resistor res1,res2,res3,res;
    res1.name = ("maximum");
    res2.name = ("none");
    res3.name = ("minimum");
    res.set_values(p,q,r);
    res.extremum_x();
    cout << "\nThe value of y is: " << res.y() << endl;
    cout << "The discriminat is: " << res.discriminant() << endl;
    cout << "The extremum for x is: " << res.extremum_x() << endl;
    if (res.discriminant()<0)
{
    cout << "The number of root(s) is/are : 0" << endl;
    cout << "There is no root!!!" << endl;
}
    else if (res.discriminant()==0)
{
    cout << "The number of root(s) is/are : 1" << endl;
    cout << "The root is: " << res.rootminus() << endl;
}
    else if  (res.discriminant()>0)
{
    cout << "The number of root(s) is/are : 2" << endl;
    cout << "The roots are: " << res.rootminus() << " , " << res.rootplus() << endl;
}
        if (p<0)
        {
            cout << "The type of extremum is " << res1.name << endl;
        }
        else if (p==0)
        {
            cout << "The type of extremum is " << res2.name << endl;
        }
        else if (p>0)
        {
            cout << "The type of extremum is " << res3.name << endl;
        }


return 0;
}
