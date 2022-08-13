#include<iostream>
using namespace std;
int main()
{
	int intvar;
	float flovar;
	int* ptrint;
	float* ptrflo;
	void* ptrvoid; //void may be pointed to any data type
	ptrint=&intvar; //ok point int to int
//	ptrint=&flovar; //error pointing int to float
//	ptrflo=&intvar; //error pointing float to int
	ptrflo=&flovar;  //ok pointing float to float
	ptrvoid=&intvar;    //void may be pointed to any data type
	ptrvoid=&flovar;//void may be pointed to any data type
	return 0;
}
