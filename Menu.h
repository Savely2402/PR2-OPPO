#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// ��������� Menu ��� ������������� ������ � ����
struct Menu {
	string name;
	double price;
	string time;
};

// ���������� ������� ��� �������� �������� Menu �� �����
vector<Menu> createObjectsFromFile(const string& filename);

// ���������� ������� ��� ������ ���������� � ����
void printMenuInfo(const Menu& menu);