#include <iostream>

using namespace std;

int main()
{
    int arr1[10];

    cout<<"please enter 10 values in array "<<endl;

    for (int x;x<10;x++)
       cin>>arr1[x];


    cout<<"please enter a number to compare " <<endl;

    int w ;

    cin >> w ;




    for (int z = 0;z<10;z++)
        {

           if( w == arr1[z] ){
            cout<<"the number already exist in the array "<<endl;
            return 0 ;
           }
           if (w != arr1[z] && z == 9 )
            cout<<"the number do not exist in the array"<<endl;

        }


    return 0;
}
