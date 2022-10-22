// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.

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
      void displayValue()
       {
        cout<<"Real: "<<real<<"     Imaginary: "<<img<<endl;
       }
      friend Complex operator+(Complex,Complex);
};
 
Complex operator+(Complex C1,Complex C2)
 {
    Complex temp;
    temp.real=C1.real+C2.real;
    temp.img=C1.img+C2.img;
    return temp;
 }

int main()
{
    Complex c1,c2,c3;
    c1.setValues(5,7);
    c2.setValues(11,14);
    c3=operator+(c1,c2);
    c3.displayValue();
    return 0;
}