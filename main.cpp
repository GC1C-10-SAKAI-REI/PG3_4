#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	//int^zρa(vfF10)
	//int a[10];
	//int^ΒΟ·zρb(vfF0)
	vector<int>b = { 10,20,30 };

	//40πφΙΗΑ{10,20,30,40}
	b.push_back(40);
	//φΜvfπν{10,20,30}
	b.pop_back();

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", b[i]);
	}

	return 0;
}