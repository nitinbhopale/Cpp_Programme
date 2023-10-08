#include<iostream>
using namespace std;

void Display(int i, const int j)
{
    int a = 10;
    const int b = 20;

    i++; //Allowed
    // j++; //Not Allowed
    a++; //Allowed
    // b++; //Not Allowed
}

int main()
{
    Display(11,21);
    return 0;
};