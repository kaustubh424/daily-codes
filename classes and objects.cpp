#include<iostream>
#include<conio.h>
using namespace std;
class Example
{
int x,y;
public:
void setData(int p, int q)
{
x=p; y=q;
}
void Display()
{
cout<<x<<" "<<y<<endl;
}
};
int main()
{
Example e1,e2;
e1.setData(5,9);
e2.setData(4,7);
e2.Display();
e1.Display();
    getch();
}