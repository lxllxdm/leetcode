#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	// ���
	/*
	����ע��
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
				cout << "�²����" << endl;
			}
			else if (val < num1) {
				cout << "�²��С" << endl;
			}
			else {
				cout << "��ϲ����" << endl;
				break;
			}
		}
		else {
			cout << "��սʧ��" << endl;
		}
		
			
	}



	system("pause");
	return 0;
} 