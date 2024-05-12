// Write a C++ program to store and print the roll no., name, age and marks of a student using structure.
#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int roll_no, age;
    float total_marks;
    void Gets()
    {
        cout << "\n Enter the Name of Student: ";
        getline(cin,name);
        cout << "\n Enter the ROLL NO of Student: ";
        cin >> roll_no;
        cout << "\n Enter the Age of the Student: ";
        cin >> age;
        cout << "\n Enter the Total Marks of The Student: ";
        cin >> total_marks;
    }
    void Display()
    {
        cout << "\nThe Name of The Student is: " << name;
        cout << "\nThe Roll no of the Student is: " << roll_no;
        cout << "\nThe Age of the Student is: " << age;
        cout << "\nThe Total Marks of Student is: " << total_marks;
    }
};
int main()
{
    student A;
        A.Gets();
        A.Display();
    

    return 0;
}
