#include <iostream>
#include <conio.h>
#include <locale.h>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a = 0;
	while (a == 0) {
		cout << " �������� �������� : \n 1 - File\n 2 - Text\n 3 - Exit\n ��� ����� : ";
		cin >> a;
		while (a < 1 || a > 3) {
			cout << "\n �� ����� ������������ ������.\n ������� ����� ����� �� 1 �� 3 : ";
			cin >> a;
		}
		if (a == 1) {
			int c = 0;
			char A[100]{};
			char p;
			ifstream file("�����.txt");
			if (file.is_open())
			{
				while (!file.eof()) {
					file.get(A[c]);
					c++;
				}
				file.close();
			}
			cout << " ����� �� �����: ";
			for (int i = 0; i < c; i++) {
				cout << A[i];
			}
			cout << "\n ��������������� �����: ";
			for (int i = c; i > -1; i--) {
				cout << A[i];
			}
			cout << "\n";
			system("pause");
			a = 0;
		}
		if (a == 2) {
			int c = 0;
			char A[100]{};
			char v;
			cin.get(v);
			while (cin.get(v)) {
				if (v == '\n')
					break;
				A[c] = v;
				c++;
			}
			for (int i = c; i > -1; i--) {
				cout << A[i];
			}
			cout <<"\n";
			system("pause");
			a = 0;
		}
		if (a == 3) {
			return 0;
		}
	}
}