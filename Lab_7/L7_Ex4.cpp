// Example 4 : Operator overloading using Friend Function.
#include<iostream>
using namespace std;
class PrePost
{
    int a;
    public:
        PrePost()
        {
            a = 2;
        }
        void show()
        {
            cout<<a<<endl;
        }
        friend PrePost operator++(PrePost x);
        friend PrePost operator++(PrePost x, int);
};

PrePost operator++(PrePost x)
{
    PrePost z;
    cout<<"Prefix "<<endl;
    z.a = ++x.a;
    return z;
}

PrePost operator++(PrePost x, int v)
{
    PrePost z;
    cout<<"Postfix "<<endl;
    z.a = x.a++;
    return z;
}

int main()
{
    PrePost p,x;
    x.show(); p.show();
    x=++p;
    x.show(); p.show();
    x=p++;
    x.show(); p.show();
}
