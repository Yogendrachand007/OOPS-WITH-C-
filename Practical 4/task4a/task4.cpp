#include<iostream>
using namespace std;
namespace first7
{
    void saysomething()
	{
		cout<<"Hello";
	}
}

namespace second
{
    void saysomething()
	{
		cout<<"Hello World";
	}
}

using namespace first;
using namespace second;
int main()
{
	saysomething();
	
	
	return 0;
}

