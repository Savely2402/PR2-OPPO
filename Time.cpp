
#include "Time.h"
#include <sstream>

void Time::read(const std::string& timeString) {
    std::istringstream iss(timeString);
    char colon; // ��� ���������� ���������
    iss >> hours >> colon >> minutes;
}

void Time::write(std::ostream& out) const {
    out << hours << ":" << minutes;
}