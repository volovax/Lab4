/*��� ����� ����������� ����������?
����������� � ������� �����?
���� #3:
����������� ����������� ����� "������" ("shape").
� ������ ���� ��������� ����������� �������.
�� ����� ������ ����������� ����������� ������ "2d shape" � "3d shape"
�� "2d shape" ����������� ������ "triangle" and "square"
�� "3d shape" ����������� ������ "sphere" and "cyllinder".
� ������� � ������� ��������� 1 ��������. ������: int n � ������� "2d shape".
������� ����������� � �����������.
����������� ����������� ������� print(), ��� ����� �������� �������� ������,
volume() - ���������� ������ ������, area() - �������.
��� ������� ������ ���� �����.*/
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