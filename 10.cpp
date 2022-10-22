/*
10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
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
      void display()
      {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
      }
     Matrix operator+(Matrix M)
      {
        Matrix temp;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+M.a[i][j];
            }
        }
        return temp;
      }
};
int main()
{
    Matrix m1,m2,m3;
    m1.setValues();
    m2.setValues();

    cout<<"First Matrix: "<<endl;
    m1.display();
    cout<<"Second Matrix: "<<endl;
    m2.display();

    m3=m1+m2;
    cout<<"Addition Matrix: "<<endl;
    m3.display();

    return 0;
}