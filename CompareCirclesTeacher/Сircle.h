#pragma once
#include <iostream>
#include <ostream>
using namespace std;

class Circle
{
private:
	float r;
	const float pi = 3.1415;
public:
	Circle() {
		r = 0;
	}

	Circle(float r) :r{ r } {};//переменна€ класса r инициализируетс€ переданной переменной r

	friend bool operator==(Circle& c1, Circle& c2) {//friend функци€ перегрузки оператора сравнени€ имеет доступ к пол€м класса
		return c1.r == c2.r; //принимает ссылки на объекты, возвращает результат сравнени€ их параметра r
	}

	int compare(Circle& c) {
		if (r > c.r) {
			return 1;
		}
		else if (r < c.r) {
			return -1;
		}
		else {
			return 0;
		}
	}

	friend bool operator<(Circle& c1, Circle& c2) {
		return c1.compare(c2) == -1;
	}

	friend bool operator>(Circle& c1, Circle& c2) {
		return c1.compare(c2) == 1;
	}

	Circle& operator+=(float f) {//перегрузка оператора +=
		this->r += f;//радиус увеличить на переданное значение
		return *this; //вернуть указатель на экземпл€р 
	}

	Circle& operator-=(float f) {
		this->r -= f;
		return *this;
	}

	friend ostream& operator<<(ostream& out, Circle& c) {
		out << (c.r * 2 * c.pi);
		return out;
	}
};

