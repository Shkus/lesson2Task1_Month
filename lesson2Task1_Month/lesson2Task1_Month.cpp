#include <iostream>

enum class Months {
    Jan = 1,
    Feb,
    Marth,
    April,
    May,
    June,
    Jule,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main(int argc, char** atgv) {
    setlocale(LC_ALL, "Russian");
    int m1;

    do {

        std::cout << "������� ����� ������: ";
        std::cin >> m1;
        Months m = static_cast<Months>(m1);

        switch (m) {
        case Months::Jan:
            std::cout << "������" << std::endl;
            break;
        case Months::Feb:
            std::cout << "�������" << std::endl;
            break;
        case Months::Marth:
            std::cout << "����" << std::endl;
            break;
        case Months::April:
            std::cout << "������" << std::endl;
            break;
        case Months::May:
            std::cout << "���" << std::endl;
            break;
        case Months::June:
            std::cout << "����" << std::endl;
            break;
        case Months::Jule:
            std::cout << "����" << std::endl;
            break;
        case Months::Aug:
            std::cout << "������" << std::endl;
            break;
        case Months::Sep:
            std::cout << "��������" << std::endl;
            break;
        case Months::Oct:
            std::cout << "�������" << std::endl;
            break;
        case Months::Nov:
            std::cout << "������" << std::endl;
            break;
        case Months::Dec:
            std::cout << "�������" << std::endl;
            break;
        }
    } while (m1 > 0 && m1 < 13);

    if (m1 > 12 || m1 < 0) {
        std::cout << "�� ���������� �����";
    }
    if (m1 == 0) {
        std::cout << "�� ��������!";
        return 0;
    }
}