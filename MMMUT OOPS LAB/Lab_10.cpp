// Write a C++ program to show inheritance using different levels.
#include<iostream>
using namespace std;
class Vehicle                                    //BASE CLASS A
{ string type;
public:
  void get_vehicle()
  {
    cout<<"Enter the type of Vehicle: ";
    cin>>type;
  }
  void Disp_vehicle()
  {
    cout<<"\nThe Type is: "<<type;
  }

};
class Car: public Vehicle{                       // CLASS CAR IS INHERITING CLASS VEHICLE
    int Year;
    public:
    void get_car()
    {
        get_vehicle();
        cout<<"\nEnter the Year Of Vehicle: ";
        cin>>Year;
    }
    void Disp_car()
    {
        Disp_vehicle();
        cout<<"\nThe Year of Car: "<<Year;
    }

};
class Sedan: public Car{                         //CLASS SEDAN IS INHERITING CAR OR INDIRECTLY INHERITING VEHICLE
    string model;
    public:
    void get_Sedan()
    {
        get_car();
        cout<<"\nEnter The model of car: ";
        cin>>model;
    }
    void Disp_Sedan()
    {
        Disp_car();
        cout<<"\nthe Model of Sedan is: "<<model;
    }

};
int main()
{
    Sedan obj;          // OBJECT CREATION OF THIRD CLASS
    obj.get_Sedan();    // CALLING OF GETS FUNCTION 
    obj.Disp_Sedan();   // CALLING OF DISPLAY FUNCT OF LOWEST ORDER DERIVED CLASS
    return 0;
}