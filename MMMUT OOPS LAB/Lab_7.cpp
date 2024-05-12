//Write a C++ program to add constructor and destructor for initializing & destroying objects.
 #include<iostream>
 using namespace std;
 class Car
 {
   int model;
   string name;

    public:
    Car(int x,string y){
     model=x;
     name=y;
    }
    void Display()
    {
        cout<<"The constructor is Created";
        cout<<"\nThe Model of Car is: "<<model;
        cout<<"\nThe Name of the car is : "<<name;
    }
    ~Car()
    {
        cout<<"\nThe destructor of class Car is invoked";
        cout<<"\nThe object is Destroyed successfully";
    }
 };
 
 int main()
 {
   
    Car obj(20,"Verna");
    obj.Display();
    
    return 0;
 }