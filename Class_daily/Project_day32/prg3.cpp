	#include<iostream>
	using namespace std;

	class A
	{
	protected:
		int a;
		void disprtd()
		{
			cout << " A method protected " << endl;
		}
	public:
		A() { a = 10; }
		void displayA()
	{
  
			cout << "Aa=" << a << endl;
	}
	};


	class B :protected A
	{
	public:
			void displayB()
		{
			
			a = 20;
			displayA();
			disprtd();
		}
	};


	class C :private B

	{
	public :
		void displayC()
		{
			displayB();
		}
	};

	int main()
	{
		C objc;
		objc.displayC();
	
	}