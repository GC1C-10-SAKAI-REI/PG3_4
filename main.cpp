#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst1(33, 4);//要素数33、すべての要素を4で初期化
	list<int> lst2{ 114,514,364 };//要素数3、114,514,364で初期化
	/*()と{}で初期化の意味が違う*/

	list<int>::iterator itr;

	itr = lst2.begin();	//最初の要素を指すイテレーター
	itr = lst2.end();	//最後				〃
	itr--;				//最後から1つ前		〃
	itr--;				//最後から2つ前		〃

	//cout << *itr << endl;

	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	return 0;
}