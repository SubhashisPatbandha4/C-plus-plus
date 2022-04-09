#include<iostream>
using namespace std;
class A
{
    int x,y;
public:
    friend istream&operator>>(istream&O,A&obj)
    {
        O>>obj.x;
        O>>obj.y;
        return O;
    }
    friend ostream&operator<<(ostream&O,A&obj)
    {
        O<<obj.x;
        cout<<endl;
        O<<obj.y;
        return O;
    }
};
int main()
{
    A obj1;
cout<<"Enter x and y value of obj1 :\n";
cin>>obj1;
cout<<"Display x and y value of obj1 :\n";
cout<<obj1;
return 0;
}
