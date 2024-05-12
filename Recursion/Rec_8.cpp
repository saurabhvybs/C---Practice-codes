//Program to resverse the string using Recursion.
#include<iostream>
using namespace std;
string temp="";

void Reverse(string &str,int size,int i)
{
    if(i>size)
    return;
    swap(str[i],str[size]);
    i++;
    size--;
    Reverse(str,size,i);

}
int main(){
    string str;
    int i=0;
    cout<<"\nEnter the string: ";
    cin>>str;
    cout<<"\nthe string is: "<<str;
    int size=str.length();
    cout<<"\nthe reverse of the string is: ";
    Reverse(str,size-1,i);
    cout<<"The Reverse of string is: "<<str;
    return 0;
}