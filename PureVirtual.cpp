#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        
        void fun() // Concrete Method 1000
        { cout<<"Base fun\n"; }
        virtual void gun() // Concrete Method 2000
        { cout<<"Base gun\n"; }
        virtual int Addition(int no1, int no2) = 0; // Abstract Method
};

class Derived : public Base
{
    public:
        int a,b;
        void gun() // concrete method 3000
        { cout<<"Derived gun\n"; }
        virtual void sun() // concrete method 4000
        { cout<<"Derived sun\n"; }
        int Addition(int no1, int no2)  // concrete method 5000
        {
            return no1+no2;
        }
};

int main()
{
    Base *bp = new Derived; // Upcasting
    //Base bobj;
    
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);

    cout<<"Addition is : "<<Ret<<"\n";



    return 0;
}