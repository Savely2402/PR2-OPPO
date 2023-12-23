#include "Menu.h"
#include <fstream>
#include <sstream>

void Menu::read(const std::string& menuString) {
    std::istringstream iss(menuString);
    char colon;
    iss >> name >> price;
    std::string remainingString;
    getline(iss >> std::ws, remainingString); // ��������� ������� ������, ������� �������
    time.read(remainingString);
}

void Menu::write(std::ostream& out) const {
    out << "��������: " << name << std::endl;
    out << "����: " << price << std::endl;
    out << "����� �������������: ";
    time.write(out);
    out << std::endl << std::endl;
}

std::vector<Menu> createObjectsFromFile(const std::string& filename) {
    std::vector<Menu> all;
    std::ifstream in(filename);

    if (!in.is_open()) {
        std::cout << "Opening file error" << std::endl;
        return all;
    }

    std::string line;
    while (std::getline(in, line)) {
        Menu menu;
        menu.read(line);
        all.push_back(menu);
    }

    in.close();

    return all;
}