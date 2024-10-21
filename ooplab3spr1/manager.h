#pragma once
#include <iostream>
#include <cstring>

class manager {
public:
    char name[128];

    // ������������ �� ��������� ������ �����������
    manager() : name("") {
        std::cout << "Manager (default constructor) created\n";
    }//����������� ��� ���������

    manager(const char* managerName) {
        strcpy_s(name, managerName);
        std::cout << "Manager (parameterized constructor) created\n";
    }//� �����������

    manager(const manager& other) {
        strcpy_s(name, other.name);
        std::cout << "Manager (copy constructor) created\n";
    }//���������

    ~manager() {
        std::cout << "Manager destroyed\n";
    }// ����������
};
