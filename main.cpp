#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{ 3,1,4,1,5 };
	cout << "初期状態" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//先頭の要素を削除
	lst.pop_front();
	cout << "先頭の要素を排除" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//最後の要素を削除
	lst.pop_back();
	cout << "最後の要素を排除" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	list<int> lst2{ 3,1,9,4 };
	auto itr = lst2.begin();
	++itr;
	++itr;//2番目の要素に移動
	lst2.erase(itr);
	cout << "2番目の要素を排除" << endl;
	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	system("pause");
	return 0;
}