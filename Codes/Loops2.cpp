

#include <iostream>

using namespace std;

int main()
{//upper part
   for(int i =1;i<8;i++)
   {
       //for spaces
       for(int s=8 ; s>i ; s-- )
        cout<<" ";

        //for stars
        for(int j = 0;j<i;j++)
            cout<<"*";

        cout<<endl;
    }
    //lower part
    for(int i =1;i<8;i++)
   {
       //for spaces , why s = 8 because we start with 7 spaces why we add 15 because there is increment of space in every line
       for(int s=8 ; s<i+15 ; s++ )
        cout<<" ";

        //for stars
        for(int j =8;j>i;j--)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}
