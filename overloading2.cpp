/* we can overload the function by changing the number
of arguments */

class Demo
{
    int Addition(int a, int b){}
    int Addition(int a, int b, int c){}
};

/* We can overload the function by changing datatypes of arguments*/

class Demo
{
    int Addition(int a, int b){}
    float Addition(int a, int b, int c){}
};

/* We can overload the function by changing sequence of arguments*/

class Demo
{
    int Addition(int a, float b){}
    float Addition(float a , int b){}
};

/* We can not overload the function by changing its return value*/

class Demo
{
    void Addition(int a, int b){}
    int  Addition(int a, int b) {}
};

/*we cannot overload the function by changing its access specifier*/

class Demo
{
    public:
        void Addition(int a, int b){}
    private:
        void Addition()
}