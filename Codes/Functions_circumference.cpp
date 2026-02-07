#include <iostream>
#include <math.h>

using namespace std;

void circle(int radius);

int main()
{
    circle(5);
    return 0;
}

void circle(int radius)
{
    cout << "Perimeter is "<<2*3.14*radius<<"\n";
    cout << "Area is "<<3.14*pow(radius,2)<<"\n";
}
