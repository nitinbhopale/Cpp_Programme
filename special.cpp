#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        
        Demo() //Default Constructor
        {
            cout<<"Inside default constructor\n";
            i = 0;
            j = 0;
        }

        Demo(int A, int B) //Parametrised Constructor
        {
            cout<<"Inside Parametriesed constructor\n";
            i = A;
            j = B;
        }

        Demo(Demo &ref) // copy constructor
        {
            cout<<"Inside copy constructor\n";
            i = ref.i;
            j = ref.j;
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2); 
    
    return 0;
}