#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	//int�^�z��a(�v�f���F10)
	//int a[10];
	//int�^�ϒ��z��b(�v�f���F0)
	vector<int>b = { 10,20,30 };

	//40�𖖔��ɒǉ�{10,20,30,40}
	b.push_back(40);
	//�����̗v�f���폜{10,20,30}
	b.pop_back();

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", b[i]);
	}

	system("pause");
	return 0;
}