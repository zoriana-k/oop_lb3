#pragma once
#include <iostream>
#include <cstring>

class manager {
public:
    char name[128];

    // Конструктори за допомогою списку ініціалізації
    manager() : name("") {
        std::cout << "Manager (default constructor) created\n";
    }//конструутор без параметрів

    manager(const char* managerName) {
        strcpy_s(name, managerName);
        std::cout << "Manager (parameterized constructor) created\n";
    }//з параметрами

    manager(const manager& other) {
        strcpy_s(name, other.name);
        std::cout << "Manager (copy constructor) created\n";
    }//копіювання

    ~manager() {
        std::cout << "Manager destroyed\n";
    }// Деструктор
};
