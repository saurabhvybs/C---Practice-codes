//Program to understand the working and concept of objects of class.
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string Name;
    int roll;
    int age;

public:
    student(string a, int b, int c)
    {
        Name = a;
        roll = b;
        age = c;
    }

    // Modify show_data to return a string instead of void
    string show_data(void)
    {
        // Create a string to hold the information
        string data;

        // Append information to the string
        data += "Name: " + Name + "\n";
        data += "Roll No.: " + to_string(roll) + "\n";
        data += "Age: " + to_string(age);

        // Return the string
        return data;
    }
};

int main()
{
    // Create objects of the student class
    student p1("Alice", 1, 16);
    student p2("Ram", 2, 24);

    // Print the data using the show_data method
    cout << "Data of the First student:\n"
         << p1.show_data() << "\n\n";
    cout << "Data of the Second student:\n"
         << p2.show_data() << "\n";

    return 0;
}
