#include<stdio.h>
#include<iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> e = { 1,2,3 };
	//int�^�̉ϒ��z��p�̃C�e���[�^�[
	vector<int>::iterator it;

	//e�̐擪�v�f���w��
	it = e.begin();

	//it���w���Ă���v�f��\��
	cout << *it << endl;

	//���̗v�f�Ɉړ�
	it++;

	//it���w���Ă���v�f��\��
	cout << *it << endl;

	return 0;
}