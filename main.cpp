#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>d;

	//�v�f����10�ɕύX
	d.resize(10);

	//�v�f�����擾
	int size = d.size();

	for (int i = 0; i < size; i++)
	{
		printf("%d", d[i]);
	}

	return 0;
}