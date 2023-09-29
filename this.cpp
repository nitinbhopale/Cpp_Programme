#include<iostream>
using namespace std;

class  Demo
{
    public:
        int i;
        int j;
        int k;

    Demo(int a = 10, int b = 20, int c = 30)
    {
        i = a;
        j = b;
        k = c;
    }

    // void Fun(Demo *this, int No1, int No2)
    void Fun(int No1, int No2)
    {
        cout<<"Inside Fun\n";
        cout<<"value of i : "<<this->i<<"\n";
        cout<<"value of j : "<<this->j<<"\n";

    }
    

    void Display()
    {
        cout<<"Inside Display\n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21,51);
    
    obj1.Fun(5,6); //Fun(&obj1,5,6)
                  // Fun(100,5,6)

    obj2.Fun(8,9); //Fun(&obj2,8,9)
                   //Fun(200,8,9)

    obj1.Display(); // Display(&obj1);
                    // Display(100);

    obj2.Display(); // Display(&obj2);
                    // Display(200);

    return 0;
}