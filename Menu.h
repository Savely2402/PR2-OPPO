#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Time.h"

class Menu {
public:
    std::string name;
    double price;
    Time time;

    // ����� ��� ���������� ���� �� ������
    void read(const std::string& menuString);

    // ����� ��� ������ ���� � �����
    void write(std::ostream& out) const;
};

// ������� ��� �������� �������� Menu �� �����
std::vector<Menu> createObjectsFromFile(const std::string& filename);