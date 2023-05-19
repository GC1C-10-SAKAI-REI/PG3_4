#include<stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g = { 1,2,3 };

	//“Y‚¦š1‚Ì—v‘f‚ğíœ{1,3}
	g.erase(g.begin() + 1);
	//––”ö‚Ì—v‘f‚ğíœ{1}
	g.pop_back();

	for (vector<int>::iterator it_g = g.begin(); it_g != g.end(); it_g++)
	{
		cout << *it_g << endl;
	}

	return 0;
}