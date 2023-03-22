#include <iostream>
#include "S_vector.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    S_vector<int> vector(5);
    std::cout << "4 ячейка до:" << vector.at(3) << std::endl;
    vector.at(3) = 4;
    std::cout << "4 ячейка после:" << vector.at(3) << std::endl;
    std::cout << "Запасное место после создания: " << vector.capacity() << std::endl;
    vector.push_back(6);
    std::cout << "6 ячейка:" << vector.at(5) << std::endl;
    std::cout << "Запасное место после добавления элемента: " << vector.capacity() << std::endl;
    vector.push_back(7);
    std::cout << "7 ячейка:" << vector.at(6) << std::endl;
    std::cout << "Запасное место после добавления элемента: " << vector.capacity() << std::endl;
}
