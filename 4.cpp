/*
4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/

#include<iostream>
using namespace std;
class Time
{
    private:
       int hour,min,sec;
    public:
       void setValue(int x,int y,int z)
       {
        hour=x;
        min=y;
        sec=z;
       }

       void normalize()
       {
        if(sec>=60)
         {
          min=min+sec/60;
          sec=sec%60;
         }
        if(min>=60)
         {
            hour=hour+min/60;
            min=min%60;
         }
       }

       void displayValue()
       {
        cout<<"Hour: "<<hour<<"    Minutes: "<<min<<"    Seconds: "<<sec<<endl;
       }

       int operator==(Time T)
       {
        if((hour==T.hour)&&(min==T.min)&&(sec==T.sec))
          return 1;
        else 
          return 0;
       }
      friend istream & operator>>(istream &is,Time &T);  
      friend ostream & operator<<(ostream &os,Time &T);
};

istream & operator>>(istream &is,Time &T)
{
  cout<<"Hour: ";
  cin>>T.hour;
  cout<<"Minutes: ";
  cin>>T.min;
  cout<<"Seconds: ";
  cin>>T.sec;
  cout<<endl;
  return is;
}
ostream & operator<<(ostream &os,Time &T)
{
  cout<<"Hour: "<<T.hour<<"    Minutes: "<<T.min<<"    Seconds: "<<T.sec<<endl;
  return os;
}

int main()
{
    Time t1,t2,t3,t4;
    cin>>t1>>t2;
    t1.normalize();
    t2.normalize();
    cout<<t1<<t2;
    if((t1==t2))
      cout<<"Both Time are Equal";
    else
      cout<<"These Two Times are Unequal";

    return 0;
}