/*
8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/

#include<iostream>
using namespace std;

class Matrix
{
       int a[3][3];
    public:
       void setValues()
       {
           int i,j;
           cout<<"Enter 9 Values: "<<endl;
           for(i=0;i<3;i++)
           {
            for(j=0;j<3;j++)
            {
              cin>>a[i][j];
            }
           }
       }
       void displayMatrix()
       {
           int i,j;
           cout<<"Matrix is: "<<endl;
           for(i=0;i<3;i++)
           {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
           }
       }
       Matrix & operator-()
       {
            int i,j;
            for(i=0;i<3;i++)
            {
              for(j=0;j<3;j++)
              {
                a[i][j]=-a[i][j];
              }
            }
            return *this;
       }

};
int main()
{
  Matrix m1,m2,m3;
  m1.setValues();
  m1.displayMatrix();
  (-m1).displayMatrix();
  return 0;
}