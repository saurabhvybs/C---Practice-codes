// C++ program to increment & decrement complex numbers using (i) unary operator overloading (ii) binary operator overloading
#include <iostream>
#include <complex>
using namespace std;
class Increment
{
    private:
    int real, imag;

public:
    Increment(int x, int y) // constructor for increment class
    {
        real = x;
        imag = y;
    }
    Increment operator++() // overloading of unary operator ++
    {
        ++real;
        ++imag;
        return *this;
    }
        void Display_Incre()
    {
        cout << "\nThe incremented value of complex number is: " << real << "+" << imag << "i";
    }
};
class Decrement //class for decrement of complex no.
{
    private:
    int real, imag;

public:
    Decrement(int x, int y) // constructor for decrement class
    {
        real = x;
        imag = y;
    }
    Decrement operator--()
    {
        --real;
        --imag;
        return *this;
    }
    void Display_Decre()
    {
        cout << "\nThe decremented value of complex number is: " << real << "+" << imag << "i";
    }
};
int main()
{
    int Real,Imag;
    cout << "Enter the Real Part \n";
    cin >>Real;
    cout<< "Enter the Imaginary Part \n";
    cin>>Imag;
 
  
    Increment obj1(Real, Imag);
    ++obj1;
    obj1.Display_Incre();
    Decrement obj2(Real, Imag);
    --obj2;
    obj2.Display_Decre();
    return 0;
}