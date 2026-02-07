#include <iostream>

using namespace std;

void max_(int x , int y , int z)
{
    if(x>y && x>z)
        cout<<" the max number is "<<x<<endl;
    else if(y>x && y>z)
        cout<<" the max number is "<<y<<endl;
    else
        cout<<" the max number is "<<z<<endl;

}

void min_(int x , int y , int z)
{
    if(x<y && x<z)
        cout<<" the min number is "<<x<<endl;
    else if(y<x && y<z)
        cout<<" the min number is "<<y<<endl;
    else
        cout<<" the min number is "<<z<<endl;

}


int main()
{
    max_(45,66,90);
    min_(45,66,90);

    return 0;
}
