//prashant
//23070123102
// checking palindrome
#include<iostream>
using namespace std;
int main()
{
   string str1;
   int i,len,k=0;
   cout<<"Enter a string: ";
   cin>>str1;
   len=str1.length(); //length function is usedto find the length of array 
   for(i=(len-1);i>=0;i--)
   {
    if(str1[i]==str1[k])
    k++;
    else
    break;
   }
   if(k==len)
   {
    cout<<"Palindrome string ";
    }
   else{
   cout<<"Not palindrome  ";}
   
   return 0;
}
