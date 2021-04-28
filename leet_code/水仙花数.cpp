#include<iostream>

using namespace std;
int main() {
	int sxh = 101;
	do {
		int a, b, c = 0;
		a = sxh % 10;
		b = sxh / 10 % 10;
		c = sxh / 100;
		if (sxh == (a*a*a + b*b*b+ c*c*c)) {
			cout << sxh << endl;
		}
		sxh++;
	} while (sxh < 1000);

	system("pause");
	return 0;
}