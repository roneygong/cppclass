#include<iostream>
#include<cstdio>
using namespace std;
int m0513() {
	int n;
	cin >> n;
	if (n % 3 == 0)//�ܱ�3������
		//�ǣ�
		if (n % 5 == 0)//	�ܱ�5������
				//�ǣ�
			if (n % 7 == 0)		//�ܱ�7������
				cout << "3/5/7" << endl;//		�ǣ��ܱ�357����
			else cout << "3/5" << endl;//			���ܱ�35����
		else		//��
			if (n % 7 == 0)//		�ܱ�7������
				cout << "3/7" << endl;//		�ǣ��ܱ�37����
			else cout << "3" << endl;//			���ܱ�3����
	else 	//��
		if (n % 5 == 0)//	�ܱ�5������
				//�ǣ�
			if (n % 7 == 0)		//�ܱ�7������
				cout << "5/7" << endl;//		�ǣ��ܱ�57����
			else cout << "5" << endl;//			���ܱ�5����
		else	//	��
			if (n % 7 == 0)//		�ܱ�7������
				cout << "7" << endl;//		�ǣ��ܱ�7����
			else cout << "No" << endl;//			�񣺶�����
	return 0;
}
