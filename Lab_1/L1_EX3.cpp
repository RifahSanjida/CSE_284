//Example 3: Write a C++ program to understand public and private access of class data members.

#include<iostream>
using namespace std;

class myTest
{
    private:
        int a, b, c;
    public:
        void access_private()
        {
            cin>>a>>b>>c;
            cout<<a<<' '<<b<<' '<<c<<endl;
        }

};
int main()
{
    myTest v;
    v.access_private();
}
