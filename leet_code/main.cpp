#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	// 输出
	/*
	多行注释
	*/
	srand((unsigned int)time(NULL));
	int num1 = rand() % 100 + 1;
	cout << num1 << endl;

	int val = 0;
	int i = 0;
	while (i < 5) {
		i++;
		cin >> val;
		if (i < 5) {
			if (val > num1)
			{
				cout << "猜测过大" << endl;
			}
			else if (val < num1) {
				cout << "猜测过小" << endl;
			}
			else {
				cout << "恭喜猜中" << endl;
				break;
			}
		}
		else {
			cout << "挑战失败" << endl;
		}
		
			
	}



	system("pause");
	return 0;
} 