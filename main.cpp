#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	//vf0Μint^vector
	vector<int>d;

	//vfπ10ΒΙΟX(resize)
	d.resize(10);

	//vfπζΎ(size)
	int size = d.size();

	for (int i = 0; i < size; i++)
	{
		printf("%d", d[i]);
	}

	return 0;
}