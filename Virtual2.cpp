#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }

};

class Derived: public Base
{
    public:
        int a,b;

        void Gun()
        {
            cout<<"Inside Base Gun\n";
        }

};

int main()
{
    Base *bp1 = new Base;
    Derived *dp1 = new Derived;
    Base *bp2 = new Derived; // upcasting
   // Derived *dp2 = new Base; //downcasting


    return 0;
}