#include <iostream>
#include <vector>
using namespace std;
int main(){
string str,temp="";
cout<<"Enter the string: ";
cin>>str;
for(int i=str.length()-1;i>=0;i--)
{
    temp+=str[i];
}
cout<<"The reverse of the string is: "<<temp;
return 0;
}
