#include<iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}



int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition(10,11);
    fRet = Addition(10.0f,11.0f);
    dRet = Addition(10.0,11.0);

    cout<<iRet<<endl;
    cout<<fRet<<endl;
    cout<<dRet<<endl;

    return 0;
}