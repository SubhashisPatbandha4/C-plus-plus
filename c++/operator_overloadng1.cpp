#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
        void getdata();
        void showdata();
        A operator +(A & obj);
};
void A::getdata()
{
    cout<<"Enter x and y :\n";
    cin>>x>>y;
}
void A::showdata()
{
    cout<<x<<y;
}
A A::operator+(A &obj)
{
    A obj1;
    obj1.x=x+obj.x;
    obj1.y=y+obj.y;
    return obj1;
}
int main()
{
    A obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1+obj2;
    obj3.showdata();
    return 0;
}
