#include<iostream>
using namespace std;
class triangle
{
    float l,b;
public:
    void getdata();
    void perimeter();
    void area();

};
void triangle :: getdata()
{
    cout<<"Enter the length and bredth of the triangle respectively :\n";
    cin>>l>>b;
}
void triangle :: perimeter()
{
    cout<<"perimeter of the triangle is = "<<2*(l+b);
}
void triangle :: area()
{
    cout<<"\narea of the triangle is = "<<l*b;
}
int main()
{
    triangle t;
    t.getdata();
    t.perimeter();
    t.area();

    return 0;
}
