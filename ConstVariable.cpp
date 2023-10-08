#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    const int j = 20;
    //const int k; // Not Allowed

    i++; //Allowed
   // j++;  //Not Allowed

    return 0;
}