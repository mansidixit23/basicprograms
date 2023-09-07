#include<iostream>
using namespace std;
class M
{
    public:
    void display (void )
    {
        cout<<"class M"<<endl;
    }
};
class N
{
    public:
    void display(void)
    {
        cout<<"class N"<<endl;

    }
};
class P : public M , public N{
    public:
    void display (void)
    {
        M::display();
    }
};
int main()
{
    P p;
    p.display();
}
