﻿//Создайте класс Circle(окружность) :
//■■ Реализуйте через перегруженные операторы;
//■■ Проверка на равенство радиусов двух окружностей(операция = = );
//■■ Сравнения длин двух окружностей(операция > ).
//Пропорциональное изменение размеров окружности, путем изменения ее радиуса(операция += и -= )

#include <iostream>
#include <ostream>
#include "Сircle.h"
using namespace std;

int main()
{
	Circle c1(5);//создаем экземпляр класса Circle и инициализируем его float значением, в конструкторе также присваивается параметр pi
	Circle c2(2);
	Circle c3(2);
	

	c3 += 3;//увеличиваем значение экземпляра перегруженным оператором
	c3 -= 1;

	cout << (c1 == c2) << endl;
	cout << (c1 > c3) << endl;
	cout << (c2 < c3) << endl;
		
	cout << c1;
}

