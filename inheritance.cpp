
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
  int x,y;
  void setMic()
  {
      x=5;
  }
  void setSpeaker()
    {
        y=6;
    }
};
class Mobile:public A
{
    int z;
    public:
    void setKeypad()
    {
        z=9;
    }
    void display()
    {
        cout<<x<<""<<y<<""<<z;
    }
};
int main()
{
    Mobile s1;
    s1.display();
    getch();
}
