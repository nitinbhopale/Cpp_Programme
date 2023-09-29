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

//class Hello extends Demo
class Hello : public Demo
{
    public:
        int a,b,c;
    Hello()
    {
        cout<<"Inside Hello constructor\n";
        a = 30;
        b = 40;
        c = 50;
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
int main()
{
    Hello hobj;

    cout<<"Size of Hello Class : "<<sizeof(hobj)<<"Bytes"<<"\n"; // 20

    cout<<hobj.x<<endl;
    cout<<hobj.y<<endl;
    cout<<hobj.a<<endl;
    cout<<hobj.b<<endl;
    cout<<hobj.c<<endl;
    
    hobj.fun();
    hobj.gun();
    return 0;
}