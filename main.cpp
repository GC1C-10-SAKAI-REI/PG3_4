#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>d;

	//—v‘f”‚ğ10ŒÂ‚É•ÏX
	d.resize(10);

	//—v‘f”‚ğæ“¾
	int size = d.size();

	for (int i = 0; i < size; i++)
	{
		printf("%d", d[i]);
	}

	return 0;
}