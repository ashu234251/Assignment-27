// 2. Write a C++ program to overload unary operators that is increment and decrement.

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
      Complex operator++()              // Pre-Incrememt Operator, as we are not writing any formal argument while defining it)
       {
         Complex temp;
         temp.real= ++real;
         temp.img= ++img;
         return temp;
       }
       Complex operator++(int)          // Post Increment (Post Increment operator define karte time, we need to write int as formal argument(useless),just to differentiate it from Pre Increment Operator)
       {
         Complex temp;
         temp.real= real++;
         temp.img= img++;
         return temp;
       }
       
      Complex operator--()              // Pre-Decrement Operator 
       {
         Complex temp;
         temp.real= --real;
         temp.img= --img;
         return temp;
       }
      Complex operator--(int)          // Post-Decrement Operator 
       {
         Complex temp;
         temp.real= real--;
         temp.img= img--;
         return temp;
       }
      void displayNumber()
       {
        cout<<"Real: "<<real<<"     Imaginary: "<<img<<endl;
       }
};
int main()
{
   Complex c1,c2;
   c1.setValues(5,6);
   c2.setValues(11,21);
   c1.displayNumber();
   (c1++).displayNumber();
   (++c1).displayNumber();
   cout<<endl;
   c2.displayNumber();
   (c2--).displayNumber();
   (--c2).displayNumber();
   
   return 0;
}