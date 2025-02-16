#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getA()
		{
			cout<<"Enter 1st no.= ";
			cin>>a;
		}
};

class B: public A
{
	public:
		int b;
		void getB()
		{
			cout<<"Enter 2nd no.= ";
			cin>>b;
		}
};

class C: public B
{
	public:
	void sum()
	{
		cout<<"\nSum= "<<a+b;
	}
};

int main()
{
	C obj;
	obj.getA();
	obj.getB();
	obj.sum();
	return 0;
}
