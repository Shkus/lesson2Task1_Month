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
        
        std::cout << "Введите номер месяца: ";
        std::cin >> m;

        if (m < 0 || m > 12) {
            std::cout << "Неправильный номер!";
        }

        if (m == 0) {
            std::cout << "Досвидания";
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




/*Описание
Напишите программу, которая спрашивает у пользователя 
номер месяца и выводит на экран название месяца, 
введённого пользователем.

Если пользователь ввёл некорректный номер месяца, 
сообщите ему об этом.

Спрашивайте пользователя до тех пор, пока он не введёт 0.

Для решения задачи воспользуйтесь перечислением.

Пример работы программы
Введите номер месяца : 1
Январь
Введите номер месяца : 7
Июль
Введите номер месяца : 13
Неправильный номер!
Введите номер месяца : 0
До свидания



Что использовать для решения.
Используйте перечисление для обработки пользовательского ввода.
Не забудьте привести пользовательский ввод к типу перечисления
с помощью static_cast.

Обрабатывайте пользовательский ввод с помощью switch case.

Для ввода значений с консоли используйте std::cin.
Для вывода на консоль используйте std::cout

*/
/*

*/
