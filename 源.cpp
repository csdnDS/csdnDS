#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	cout << "������1-7�е�һ�����֣�" << endl;
	cin >> a;
	if (a == 1)
		cout << "Monday" << endl;
	else if (a == 2)
		cout << "Tuesday" << endl;
	else if (a == 3)
		cout << "Wednesday" << endl;
	else if (a == 4)
		cout << "Thrudday" << endl;
	else if (a == 5)
		cout << "Friday" << endl;
	else if (a == 6)
		cout << "Saturday" << endl;
	else 
		cout << "Sunday" << endl;
	return 0;
}