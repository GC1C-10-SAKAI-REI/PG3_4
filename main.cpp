#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{ 3,1,4,1,5 };
	cout << "�������" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//�擪�̗v�f���폜
	lst.pop_front();
	cout << "�擪�̗v�f��r��" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//�Ō�̗v�f���폜
	lst.pop_back();
	cout << "�Ō�̗v�f��r��" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	list<int> lst2{ 3,1,9,4 };
	auto itr = lst2.begin();
	++itr;
	++itr;//2�Ԗڂ̗v�f�Ɉړ�
	lst2.erase(itr);
	cout << "2�Ԗڂ̗v�f��r��" << endl;
	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	system("pause");
	return 0;
}