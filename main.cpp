#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{ 1,2,3 };
	//0�Ԗڂ̗v�f���w���C�e���[�^�[
	auto itr = lst.begin();
	//1��\��
	//cout << *itr << endl;
	//1��9�ɕύX
	*itr = 9;
	//cout << *itr << endl;
	itr++;
	//1�Ԗڂ̗v�f��10�ɕύX
	*itr = 10;
	//cout << *itr << endl;

	//�擪�ɗv�f��ǉ�
	lst.push_front(114);
	//�Ō���ɗv�f��ǉ�
	lst.push_back(514);

	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << endl;
	}

	return 0;
}