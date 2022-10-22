/*
7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/

#include<iostream>
using namespace std;
class fraction
{
  private:
      long numerator;
      long denominator;
  public:
      friend ostream & operator<<(ostream &,fraction);
      friend istream & operator>>(istream &,fraction &);
      fraction()
      {
        numerator=0;
        denominator=0;
      }
      void operator++(int)        // post-increment
      {
         numerator++;
         denominator++;
      }
      void operator++()        // post-increment
      {
         ++numerator;
         ++denominator;
      }
};

ostream & operator<<(ostream &os,fraction f)
{
  cout<<f.numerator<<"/"<<f.denominator;
  return os;
}
istream & operator>>(istream &is,fraction &f)
{
  cout<<"Numerator: ";
  cin>>f.numerator;
  cout<<"Denominator: ";
  cin>>f.denominator;
  return is;
}

int main()
{
  fraction f1,f2,f3;

  cout<<"f1: "<<f1<<endl;
  cout<<"f2: "<<f2;

  cout<<"Enter First Fraction Value: "<<endl;
  cin>>f1;
  cout<<"f1: "<<f1<<endl;

  cout<<"Enter Second Fraction Value: "<<endl;
  cin>>f2;
  cout<<"f2: "<<f2<<endl;

  f1++;
  cout<<"f1++: "<<f1<<endl;

  ++f1;
  cout<<"++f1: "<<f1<<endl;
  cout<<endl;



  return 0;
}