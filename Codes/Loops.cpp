

#include <iostream>

using namespace std;

int main()
{
    for(int i =0 ;i<8 ;i++)

    {
        for(int z =7;z>i;z--)
            cout<<" ";

        for(int j =0;j<i;j++)
            {
                cout<<"*";
            }
            cout<<endl;

    }


    return 0;
}
