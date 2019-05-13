#include<iostream>
#include<cstdio>
using namespace std;
int m0513() {
	int n;
	cin >> n;
	if (n % 3 == 0)//能被3整除吗？
		//是：
		if (n % 5 == 0)//	能被5整除吗？
				//是：
			if (n % 7 == 0)		//能被7整除吗？
				cout << "3/5/7" << endl;//		是：能被357整除
			else cout << "3/5" << endl;//			否：能被35整除
		else		//否：
			if (n % 7 == 0)//		能被7整除吗？
				cout << "3/7" << endl;//		是：能被37整除
			else cout << "3" << endl;//			否：能被3整除
	else 	//否：
		if (n % 5 == 0)//	能被5整除吗？
				//是：
			if (n % 7 == 0)		//能被7整除吗？
				cout << "5/7" << endl;//		是：能被57整除
			else cout << "5" << endl;//			否：能被5整除
		else	//	否：
			if (n % 7 == 0)//		能被7整除吗？
				cout << "7" << endl;//		是：能被7整除
			else cout << "No" << endl;//			否：都不能
	return 0;
}
