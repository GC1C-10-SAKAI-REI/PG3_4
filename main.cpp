#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>d;

	//要素数を10個に変更
	d.resize(10);

	//要素数を取得
	int size = d.size();

	for (int i = 0; i < size; i++)
	{
		printf("%d", d[i]);
	}

	return 0;
}