#include<stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst{ 3,1,4,1,5 };
	cout << "‰Šúó‘Ô" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//æ“ª‚Ì—v‘f‚ðíœ
	lst.pop_front();
	cout << "æ“ª‚Ì—v‘f‚ð”rœ" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	//ÅŒã‚Ì—v‘f‚ðíœ
	lst.pop_back();
	cout << "ÅŒã‚Ì—v‘f‚ð”rœ" << endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	list<int> lst2{ 3,1,9,4 };
	auto itr = lst2.begin();
	++itr;
	++itr;//2”Ô–Ú‚Ì—v‘f‚ÉˆÚ“®
	lst2.erase(itr);
	cout << "2”Ô–Ú‚Ì—v‘f‚ð”rœ" << endl;
	for (auto itr = lst2.begin(); itr != lst2.end(); ++itr)
	{
		cout << *itr << ",";
	}
	cout << endl;

	system("pause");
	return 0;
}