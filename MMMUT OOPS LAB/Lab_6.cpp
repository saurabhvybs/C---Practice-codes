// Write a C++ program to demonstrate friend function & friend class
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    int year=2023, version= 666;

protected:
    string model="Verna", name="Hyundai";

private:
    friend class Car;                  // MAKING CLASS CAR AS FRIEND CLASS OF CLASS VEHICLE
    friend void Display(Vehicle &obj); // MAKING DISPLAY AS FRIEND OF CLASS VEHICLE AND PASS THE OBJECT OF CLASS VEHICLE IN FUNC. DISPLAY.
};


void Display(Vehicle &obj) // friend function called
{
    cout << "\n\nThe following Dispalys are from Friend function \n";
    cout << "THe Model of Car is: " << obj.model;     //FRIEND FUNCT USING VALUES OF PRIVATE AND PROTECTED VARIABLES OF CLASS VEHICLE
    cout << "\n The Year of Car is: " << obj.year<<"\n\n";
}


class Car // friend class called
{
public:
    void display(Vehicle &Obj)
    {
        cout << "\nThe following Displays are from Friend class";   //FRIEND CLASS GIVING ACCESS SO THAT PRIVATE AND PROTECTED 
        cout << "\nThe Version of the Car is: " << Obj.version;     //MEMBERS OF CLASS VEHICLE IS USED.
        cout << "\nThe Name of the car is: " << Obj.name;
    }
};


int main()
{
    Vehicle obj1; //object creation for class Vehicle.
    Car obj2;    // object creation of friend class Car.
    obj2.display(obj1); // calling display funct which is a friend class and feeding obj1 of Vehicle into it. as it is its friend it can access it
    Display(obj1);      // calling Display funct which is a friend function
    return 0;
}
