#include<iostream>
using namespace std;
class Demo
{
    public:
        // 1000
        int Addition(int A, int B) //Addition@2ii
        {
            int Ans = 0;
            Ans = A+B;
            return Ans;
        }
        //2000
        int Addition(int A, int B , int C) //Addition@3iii
        {
            int Ans = 0;
            Ans = A+B+C;
            return Ans;
        }
        //3000
        float Addition(float A, float B) //Addition@2ff
        {
            float Ans = 0.0f;
            Ans = A+B;
            return Ans;
        }
        
};
   

int main()
{
    Demo obj;

    int i = 10 , j = 20 , k = 30;
    int Ret = 0;
    float fRet = 0.0f;
    float a = 10.10, b = 88.23;

    Ret = obj.Addition(i,j); //CALL 1000

    cout<<"Addition is : "<<Ret<<"\n";

     Ret = obj.Addition(i,j,k); //CALL 2000

    cout<<"Addition is : "<<Ret<<"\n";

    fRet = obj.Addition(a,b); // CALL 3000

    cout<<"Addition is :"<<fRet<<"\n";

    return 0;
}
