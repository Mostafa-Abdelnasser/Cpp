// array takes 10 values from the user and print them out



#include <iostream>

using namespace std;

int main()
{
    int arr1[10];

    cout<<"please enter 10 values in array "<<endl;

    for (int x;x<10;x++)
       cin>>arr1[x];


    cout<<"your array is " <<endl;
    for (int z = 0;z<10;z++)
        cout<<arr1[z]<<"\t";

    return 0;
}
