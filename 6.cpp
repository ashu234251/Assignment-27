/*
6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/

#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    private:
       char *str;
    public:
       int operator==(CString s)
       {
         if(strcmp(str,s.str)==0)
            return 1;
         else
            return 0;
       }
       void operator+(CString s)
       {
         CString temp;
         temp.str=(char*)malloc(strlen(str)+strlen(s.str)+1);
         strcpy(temp.str,(strcat(str,s.str)));
         cout<<"Concatenated String is: "<<temp.str;
       }
       CString()
       {

       }
       CString(char *s)
       {
         str=(char*)malloc(strlen(s)+1);
         strcpy(str,s);
       }
};
int main()
{
   CString s1("Ashish"),s2("Varshney"),s3;
   if(s1==s2)
      cout<<"Strings are Same."<<endl;
   else
      cout<<"Strings are different."<<endl;
   
   s1+s2;
   return 0;
}