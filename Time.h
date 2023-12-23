#pragma once


#include <iostream>
#include <string>

class Time {
public:
    int hours;
    int minutes;

    // ����� ��� ���������� ������� �� ������
    void read(const std::string& timeString);

    // ����� ��� ������ ������� � �����
    void write(std::ostream& out) const;
};