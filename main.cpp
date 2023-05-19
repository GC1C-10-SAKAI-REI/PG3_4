#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{ 1,2,3 };
	//0番目の要素を指すイテレーター
	auto itr = lst.begin();
	//1を表示
	//cout << *itr << endl;
	//1を9に変更
	*itr = 9;
	//cout << *itr << endl;
	itr++;
	//1番目の要素を10に変更
	*itr = 10;
	//cout << *itr << endl;

	//先頭に要素を追加
	lst.push_front(114);
	//最後尾に要素を追加
	lst.push_back(514);

	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << endl;
	}

	return 0;
}