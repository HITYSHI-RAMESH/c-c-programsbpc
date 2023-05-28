// C++ program to demonstrate constructors
#include <bits/stdc++.h>
using namespace std;
class shine
{
	public:
	int id;
	
	//Default Constructor
	shine()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}
	
	//Parameterized Constructor
	shine(int x)
	{
		cout <<"Parameterized Constructor called "<< endl;
		id=x;
	}
};
int main() {
	
	// obj1 will call Default Constructor
	shine obj1;
	cout <<" id is: "<<obj1.id << endl;
	
	// obj2 will call Parameterized Constructor
	shine obj2(21);
	cout <<" id is: " <<obj2.id << endl;
	return 0;
}
