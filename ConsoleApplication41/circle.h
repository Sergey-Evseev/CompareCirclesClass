#pragma once
#include <iostream>
class Circle
{
private:
	float r;
	const float pi = 3.1415;
public:
	Circle() {
		r = 0;
	}

	Circle(float r) :r{ r } {};

	friend bool operator==(Circle& c1, Circle& c2) {
		return c1.r == c2.r;
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
		return c1.compare(c2)==-1;
	}

	friend bool operator>(Circle& c1, Circle& c2) {
		return c1.compare(c2) == 1;
	}

	Circle& operator+=(float f) {
		this->r += f;
		return *this;
	}

	Circle& operator-=(float f) {
		this->r += f;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream out, Circle& c) {
		out << c.r * 2 * c.pi;
		return out;
	}
};

