#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst1(33, 4);//�v�f��33�A���ׂĂ̗v�f��4�ŏ�����
	list<int> lst2{ 114,514,364 };//�v�f��3�A114,514,364�ŏ�����
	/*()��{}�ŏ������̈Ӗ����Ⴄ*/

	list<int>::iterator itr;

	itr = lst2.begin();	//�ŏ��̗v�f���w���C�e���[�^�[
	itr = lst2.end();	//�Ō�				�V
	itr--;				//�Ōォ��1�O		�V
	itr--;				//�Ōォ��2�O		�V

	//cout << *itr << endl;

	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr)
	{
		cout << *itr << "\n";
	}

	return 0;
}