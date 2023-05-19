#include<stdio.h>
#include<iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> e = { 1,2,3 };
	//int型の可変長配列用のイテレーター
	vector<int>::iterator it;

	//eの先頭要素を指す
	it = e.begin();

	//itが指している要素を表示
	cout << *it << endl;

	//次の要素に移動
	it++;

	//itが指している要素を表示
	cout << *it << endl;

	return 0;
}