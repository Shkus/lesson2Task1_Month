// lesson2Task1_Month.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


enum class months {
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int m;
    months M;
    
    do
    {
        
        std::cout << "������� ����� ������: ";
        std::cin >> m;

        if (m < 0 || m > 12) {
            std::cout << "������������ �����!";
        }

        if (m == 0) {
            std::cout << "����������";
        }
        
        switch (m) {
        case 1:
            
            std::cout << static_cast<int>(M) << std::endl;
            break;
        case 1:
            months M = static_cast<months>(1);
            std::cout << static_cast<int>(M) << std::endl;
            break;
        }
                

        
    } while (m > 0 && m <=12);
    

}




/*��������
�������� ���������, ������� ���������� � ������������ 
����� ������ � ������� �� ����� �������� ������, 
��������� �������������.

���� ������������ ��� ������������ ����� ������, 
�������� ��� �� ����.

����������� ������������ �� ��� ���, ���� �� �� ����� 0.

��� ������� ������ �������������� �������������.

������ ������ ���������
������� ����� ������ : 1
������
������� ����� ������ : 7
����
������� ����� ������ : 13
������������ �����!
������� ����� ������ : 0
�� ��������



��� ������������ ��� �������.
����������� ������������ ��� ��������� ����������������� �����.
�� �������� �������� ���������������� ���� � ���� ������������
� ������� static_cast.

������������� ���������������� ���� � ������� switch case.

��� ����� �������� � ������� ����������� std::cin.
��� ������ �� ������� ����������� std::cout

*/
/*

*/
