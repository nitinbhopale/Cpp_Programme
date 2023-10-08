#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        int k;

        // Parametrised costructor
        Demo(int a, int b, int c) 
        {
            i = a;
            j = b;
            k = c;
        }
};

int main()
{
    Demo obj(11,21,51);

    
    return 0;
};