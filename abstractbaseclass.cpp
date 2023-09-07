#include<iostream>
using namespace std;
class base
{
    public:
    virtual void getdata();
    virtual void display();
};
class derivedB: public base{
    private:
    long int rollno;
    char name[20];
    public:
    void getdata();
    void display();
};
class derivedC : public base
{
    private:
    float height;
    float weight ;
    public:
    void getdata();
    void display();
};
void base :: getdata() {}
void base :: display() {}
void derivedB :: getdata()
{
    cout<<"enter rollno:"<<endl;
    cin>>rollno;
    cout<<"enter name :"<<endl;
    cin>>name;
}
void derivedB :: display()
{
    cout<<" rollno:"<<rollno<<endl;
    cout<<" name :"<<name<<endl;
}
void derivedC :: getdata()
{
    cout<<"enter height:"<<endl;
    cin>>height;
    cout<<"enter weight :"<<endl;
    cin>>weight;
}
void derivedC :: display()
{
    cout<<"height:"<<height<<endl;
    cout<<" weight :"<<weight<<endl;
}
int main()
{
    base *ptr[2];
    derivedB objb;
    derivedC objc;
    ptr[0]=&objb;
    ptr[1]=&objc;
    ptr[0]->getdata();
    ptr[1]->getdata();
    ptr[0]->display();
    ptr[1]->display();
    return 0; 
}