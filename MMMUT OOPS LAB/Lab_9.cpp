//Write a C++ programs that demonstrate the concept of function overriding.
#include<iostream>
using namespace std;
class Vehicle
{   public:
         int a=2,b=3;
    public:
    virtual void sigma()     // function declared
    {
        cout<<"The Parent Class\n";
        cout<<"the sum is "<<a+b<<"\n";
    }
};
class Car : public Vehicle
{
    public:
    void sigma() override  // Function overriding
    {
        cout<<"The Derived Class\n";
       // call of function of base class Vehicle
       cout<<"after over riding \n";
       cout<<a*b;
    }
};
int main()
{
    Vehicle obj;
    obj.sigma();
    Car obj1;
    obj1.sigma(); // call of function in derived class Car
    return 0;

}