//prashant
//23070123102
// reversing the string
#include<iostream>
using namespace std;
int main()
{
    string str1;
    int i,len;
    cout<<"Enter a string: ";
    cin>>str1;
    len= str1.length();//length of string 
     cout<<"Reversed string is : ";
    for (i=(len-1);i>=0;i--)
    {
        cout<<str1[i];
    }
    
    return 0;

}
