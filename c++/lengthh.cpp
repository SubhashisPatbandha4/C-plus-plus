#include<iostream>
using namespace  std;
class length
{
    int feet,inch;
public:
    void getdata();
    void show();
};
void length :: getdata()
{

    cout<<"Enter length in\nFeet :  " ;
    cin>>feet;
    cout<<"and Inch : ";
    cin>>inch;

}
void length :: show()
{
    if(inch>=12)
    {
        while(inch>=12)
        {
            inch=inch-12;
            feet++;
        }
    }

    cout<<feet<<"Feet-"<<inch<<"inch";
}
int main()
{
    length obj;
    obj.getdata();
    obj.show();

    return 0;
}
