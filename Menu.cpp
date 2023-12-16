#include "Menu.h"

vector<Menu> createObjectsFromFile(const string& filename) {
	vector <Menu> all;
	ifstream in(filename);

	if (!in.is_open()) {
		cout << "Opening file error" << endl;
		return all;
	}

	int i = 0;

	Menu Node;
	while (!in.eof()) {
		string str;

		// ��������� ������ ����� ������ � ������ str
		in >> str;

		// i == 0 - ��� 
		if (i == 0) {
			Node.name = str;
		}

		// i == 1 - ����
		if (i == 1) {
			Node.price = stod(str);
		}

		// i == 2 - �����
		if (i == 2) {
			Node.time = str;

			// �������� ����
			i = -1;

			// ��������� ���� � ������ ���� ����
			all.push_back(Node);
		}
		i++;

	}

	in.close();

	return all;
}

// ������� ������ ���������� �� ����� ����
void printMenuInfo(const Menu& menu) {
	cout << "��������: " << menu.name << endl; 
	cout << "����: " << menu.price << endl;
	cout << "����� �������������: " << menu.time << endl;
	cout << endl;
}