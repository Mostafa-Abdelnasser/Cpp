

#include <iostream>

using namespace std;

int bin_to_deci(int binary)
{
  int decimal= 0;
  int weight = 1 ;
  int rem ;
    while(binary != 0)
    {
     rem = binary % 10;
     decimal = decimal + rem*weight;
     binary = binary/10;
     weight = weight *2;

     }

    return decimal ;
}
int main()
{
    cout<<"decimal number is:"<< bin_to_deci(111010101); // 1+4+16+64+128+256=469

    return 0;
}

