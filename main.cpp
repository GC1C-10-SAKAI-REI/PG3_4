#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	vector<float>c = { 0.0f,1.0f,2.0f };

	printf("%f\n", c[1]);

	//c[1]��-1.5f����
	c[1] = -1.5f;

	printf("%f\n", c[1]);

	return 0;
}