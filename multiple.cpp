#include<iostream>
using namespace std;

class Demo
{
    public:
        int x, y;

    Demo()
    {
        cout<<"Inside Demo constructor\n";
        x = 10;
        y = 20;
    } 
    ~Demo()
    {
        cout<<"Inside Demo destructor\n";
    }

    void fun()
    {
        cout<<"Inside fun of Demo\n";
    }
};


class Hello 
{
    public:
        int a,b;
    Hello()
    {
        cout<<"Inside Hello constructor\n";
        a = 30;
        b = 40;  
    }

    ~Hello()
    {
        cout<<"Inside Hello destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun of Hello\n";
    }
};


class Marvellous : public Hello , public Demo
{
    public:
        int p ;

        Marvellous()
        {
            cout<<"Inside constructor of Marvellous\n";
            p = 60;
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor of Marvellous\n";
        }

        void sun()
        {
            cout<<"Inside sun of Marvellous\n";
        }
};
int main()
{
    Marvellous mobj;

    cout<<"Size of Marvellous Class : "<<sizeof(mobj)<<" Bytes"<<"\n"; // 20
    
    mobj.fun();
    mobj.gun();
    mobj.sun();
    return 0;
}