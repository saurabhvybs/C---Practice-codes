//Write a C++ program to demonstrate member function declaration inside and outside the class
#include<iostream>

using namespace std;
class Car
{ 
    private:
    int model,year;
    public:
   Car(int x,int y):model(x),year(y){} // parameterized constructor. shorthand modern way.

   void display()
   {
    cout<<"The funct. declared Inside class Model: "<<model;
   }
   void Details();
};
void Car :: Details()
{
    cout<<"\n The Funct. declared Outside class Year: "<<year;   
};
int main()
{
    Car hyundai(234,2023);
    hyundai.display();
    hyundai.Details();
    return 0;
}

