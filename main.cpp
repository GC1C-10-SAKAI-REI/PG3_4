#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	//�v�f��0��int�^vector
	vector<int>d;

	//�v�f����10�ɕύX(resize)
	d.resize(10);

	//�v�f�����擾(size)
	int size = d.size();

	for (int i = 0; i < size; i++)
	{
		printf("%d", d[i]);
	}

	return 0;
}