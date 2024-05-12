//Program to check whether the string is palindrome or not using Recursion and passing only a single parameter
#include<iostream>
using namespace std;
int idx=0;

void Palindrome(string &str){
    if(idx>=str.length()/2)
    return;
     int size=str.length()-1-idx;
    swap(str[idx],str[size]);
    idx++;
    Palindrome(str);

}
int main(){
    string str;
    cout<<"\nEnter the String: ";
    getline(cin,str);
    string cpy=str;
    Palindrome(str);
    if(str==cpy)
    cout<<"\nString is Palindrome ";
    else 
    cout<<"\nString is not Palindrome ";
    return 0;

}