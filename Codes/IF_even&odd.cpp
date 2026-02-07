#include <iostream>

using namespace std;
/*this program determine if the number even or odd*/

int main()
{
    int x;
    cout << "Enter integer number" << endl;
    cin  >> x;

        if (x%2==0)
            cout<<x<<" is even"<<endl;
        else
            cout<<x<<" is odd"<<endl;

    return 0;
}
