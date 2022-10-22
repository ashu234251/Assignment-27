/*
9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/

#include<iostream>
#include<cstring>
using namespace std;

class myString
{
      char str[100];
   public:
      myString & operator!()
       {
         int i;
         for(i=0;str[i];i++)
         {
            if(str[i]>64 && str[i]<91)
               str[i]=str[i]+32;
            else if(str[i]>96 && str[i]<123)
               str[i]=str[i]-32;
         }
         return *this;
       }
       void display()
       {
        cout<<"String is: "<<str<<endl;
       }
      myString()
        { }
      myString(char *s)
       {
         strcpy(str,s);
       }
};

int main()
{
    myString s1("Ashish Varshney"),s2("Ashish Varshney@2000");
    s1.display();
    (!s1).display();
    return 0;
}