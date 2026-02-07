#include <iostream>
#include <math.h> //exp() sqrt = pow(num,power) log ln sin cos
using namespace std;
//were the function is ax^2+bx+c = 0
int main()
{
    float a,b,c;
    float x1,x2;
    cout << "inter three integers a,b,c to solve function ax^2+bx+c = 0 " << endl;
    cin >> a >> b >> c ;

    if (b*b>=4*a*c)

    {
        //compute x1
        x1 = ( -b + sqrt(b*b - 4*a*c))/(2*a);
        cout<<"1st root:"<<x1;
        //compute x2
        x2 = ( -b - sqrt(b*b - 4*a*c))/(2*a);
        cout<<"\n \b 2nd root:"<<x2;
    }

    else
        cout<<"complex roots"<<endl;
    return 0;
}
