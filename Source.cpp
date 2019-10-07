/*что такое виртуальный деструктор?
производный и базовый класс?
ЛАБА #3:
реализовать абстрактный класс "фигура" ("shape").
в классе буду объявлены абстрактные функции.
от этого класса наследовать абстрактные классы "2d shape" и "3d shape"
от "2d shape" наследуется классы "triangle" and "square"
от "3d shape" наследуется классы "sphere" and "cyllinder".
В фигурах в функция заносится 1 аргумент. Пример: int n в функции "2d shape".
Создать конструктор с параметрами.
Реализовать виртуальные функции print(), кот будут выводить название фигуры,
volume() - вычисление объема фигуры, area() - площадь.
Для каждого класса свой хедер.*/
#include <iostream>

class Shape {	
public:
	void virtual print() = 0;
};

class _2dShape: public Shape {
public:
	int width = 0;
};

class _3dShape : public Shape {
public:
	int high = 0;
};

class Triangle : public _2dShape {
	
public:
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;
	Triangle(int first, int second, int third) {
		side1 = first;
		side2 = second;
		side3 = third;
	}
	//	next will be Area of Triangle, but I tired 
};

class Square : public _2dShape {

};

class Sphere : public _3dShape {
	
};


class Cyllinder : public _3dShape {

};
int main() {

	return 0;
}