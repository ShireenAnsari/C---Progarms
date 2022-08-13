#include<iostream>
using namespace std;
class UnaryExample
{   private:
	     int   localint;
	 public:
	     UnaryExample(int j)
		{   localint = j;	}
		
		int operator++ (int) 
		{   return (localint++);	}
};
int main()
{   UnaryExample object1(10);
	 cout << object1++;   // overloaded operator			
return 0; 
}

