#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	//int型配列a(要素数：10)
	//int a[10];
	//int型可変長配列b(要素数：0)
	vector<int>b = { 10,20,30 };

	//40を末尾に追加{10,20,30,40}
	b.push_back(40);
	//末尾の要素を削除{10,20,30}
	b.pop_back();

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", b[i]);
	}

	system("pause");
	return 0;
}