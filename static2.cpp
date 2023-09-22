#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;
        
        
       Demo(int a = 10, int b=20)
       {
            i = a;
            j = b;
       }

       void Display()
       {
            cout<<"Value of i : "<<i<<"\n";
            cout<<"Value of j : "<<j<<"\n";
       }

};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);

    return 0;
}