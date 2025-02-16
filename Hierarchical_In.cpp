#include<iostream>
using namespace std;

class A
{
	public:
		int a,b;
		void get()
		{
			cout<<"\nEnter two numbers= ";
			cin>>a>>b;
		}
};

class B: public A
{
	public:
	void sum()
	{
		cout<<"\nSum= "<<a+b;
	}
};

class C: public A
{
		public:
		void diff()
		{
			cout<<"\nDiff.= "<<a-b;
		}
};

int main()
{
	B obj1;
	obj1.get();
	obj1.sum();
	
	C obj2;
	obj2.get();
	obj2.diff();
	
	return 0;
}
