#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;
int area (int);
int area (int, int);
int area (int, int, int);

int area (int x)
{
    cout << "enter radius of circle : ";
    cin >> x;
    cout << "area of circle : " << 3.14*x*x;
}
int area (int x, int y)
{
    cout << "enter height and width of rectangle/square : ";
    cin >> x >> y;
    if (x==y)
        cout << "area of square : " << x*y;
    else
        cout << "area of rectangle : " << x*y;
}
int area (int x, int y, int z)
{
    cout << "enter length, breadth, height of cube/cuboid : ";
    cin >> x >> y >> z;
    if (x==y && x==z)
        cout << "volume of cube : " << x*y*z;
    else    
        cout << "volume of cuboid : " << x*y*z;
}



int main()
{
    float x,y,z;
    area(x);
    cout << endl;
    area(x,y);
    cout << endl;
    area(x,y,z);
    cout << endl;   
    return 0;
}