#include<stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> f = { "ローソン","ファミマ","セブン" };

	//前要素を順にたどる
	for (vector<string>::iterator it_f = f.begin();it_f !=f.end();it_f++)
	{
		cout << *it_f << endl;
	}

	return 0;
}