#include<iostream>
using namespace std;

class A
{
	public:
		int a,b;
		void get()
		{
			cout<<"Enter two numbers= ";
			cin>>a>>b;
		}
};
class B:public A
{
	public:
		void sum()
		{
			cout<<"\nSum= "<<a+b;
		}
};
int main()
{
	B obj;
	obj.get();
	obj.sum();
	return 0;
}
