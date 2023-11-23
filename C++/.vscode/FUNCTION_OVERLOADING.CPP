#include<iostream>
using namespace std;
int add(int a,int b)    //if i changed the datatype of arguments then also it will use this function only if there are two arguments
    {
        return a+b;
    }
int add(int a,int b,int c)
    {
        return a+b+c;
    }
float volume(double r,int h)   //volume of cylinder
    {
        return(3.14*r*r*h);
    }
int volume(int s)           //volume of cube
    {
        return(s*s*s);
    }
int volume(int l,int b,int h)   //volume of cuboid
    {
        return(l*b*h);
    }
int main()
{
    int a=45,b=60,c=12;
    cout<<"the sum of a and b is "<<add(a,b)<<endl;
    cout<<"the sum of a , b and c is "<<add(a,b,c)<<endl;
    cout<<"the volume of cylinder is :"<<volume(3,7)<<endl;
    cout<<"the volume of cube is :"<<volume(3)<<endl;
    cout<<"the volume of cuboid is :"<<volume(3,7,6)<<endl;
    return 0;
}