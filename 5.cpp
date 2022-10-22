/*
5. Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers.
*/
#include<iostream>
using namespace std;
class Numbers
{
    private:
       int x,y,z;
    public:
       void setValue(int a,int b,int c)
       {
        x=a;
        y=b;
        z=c;
       }
       void displayValue()
       {
        cout<<"First: "<<x<<"    Second: "<<y<<"    Third: "<<z<<endl;
       }
       Numbers operator-()
       {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
       }
};

int main()
{
    Numbers n1,n2,n3,n4;
    n1.setValue(2,5,8);
    n2.setValue(14,7,3);
    n1.displayValue();
    n2.displayValue();
    n3= -n1;
    n4= -n2;
    n3.displayValue();
    n4.displayValue();
    return 0;
}