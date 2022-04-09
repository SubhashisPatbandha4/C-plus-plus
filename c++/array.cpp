#include<iostream>
using namespace std;
class A
{
    int i;
    int s=0;
    int a[10];
    public:
        void getdata();
        void sum();

};
void A::getdata()
{
    cout<<"Enter elements to the array\n";
    for(i=0;i<10;i++)
    cin>>a[i];
}
void A:: sum()
{
    for(i=0;i<10;i++)
       s=s+a[i];
    cout<<"Sum of all elements of the array is ="<<s;
}

int main()
{
    A obj;
    obj.getdata();
    obj.sum();
    return 0;
}
