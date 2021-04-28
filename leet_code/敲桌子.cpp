#include<iostream>
using namespace std;

int main() {
	int num = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}