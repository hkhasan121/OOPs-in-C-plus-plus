#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

};

class Male : private Human
{
    public:
    string color;
    void sleep()
    {
        cout<<"Man is sleeping"<<endl;
    }
    void getHeight()
    {
        cout<<height;
    }
};

int main()
{
    Male a;
    a.getHeight();
    a.sleep();

}