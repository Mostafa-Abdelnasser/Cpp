//Mostafa Abdelnasser hassan
//1801145
//section 4
//problem 2


#include <iostream>

using namespace std;

int main()
{
    //responsible for each line increment
    for(int l =0; l<7 ;l++ )
    {

       //responsible for spaces from left
        for(int s =6 ; s>l ; s--  )
            cout<<" ";


        //responsible for stars
        for(int j=0;j<(l*2)+1;j++)
            cout<<"*";

        cout<<endl;

    }
    return 0;
}
