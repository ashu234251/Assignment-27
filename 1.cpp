/*
1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/

#include<iostream>
using namespace std;
class Complex
{
    private:
      int real,img;
    public:
      void setValues(int x,int y)
       { 
         real=x;
         img=y;
       }
      void displayNumber()
       {
         cout<<"Real: "<<real<<"   Imaginary: "<<img<<endl;
       }
      Complex operator+(Complex C)
       { 
         Complex temp;
         temp.real=real+C.real;
         temp.img=img+C.img;
         return temp;
       }
      Complex operator-(Complex C)
       { 
         Complex temp;
         temp.real=real-C.real;
         temp.img=img-C.img;
         return temp;
       }
      Complex operator*(Complex C)
       { 
         Complex temp;
         temp.real=(real*C.real)-(img*(C.img));
         temp.img=(real*C.img)+(img*(C.real));
         return temp;
       }
      int operator==(Complex C) 
       { 
         if(real==C.real && img==C.img)
            return 1;
         else
            return 0;
       }

};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setValues(5,6);
    c2.setValues(5,61);
    c3=c1+c2;
    c3.displayNumber();
    c4=c1-c2;
    c4.displayNumber();
    c5=c1*c2;
    c5.displayNumber();
    if(c1==c2)
      cout<<"Equal";
    else
      cout<<"Not Equal";
      

    return 0; 

}