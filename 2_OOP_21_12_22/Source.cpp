#include <iostream>
#include "Point.h"
#include "Tiger.h"

int main() {
	//char str[] = "abc";
	/*Point my_point(5, 10, str); // explicit ������ �������� ��������������

	std::cout << my_point.getX() << '\n';
	my_point.move(3, 9).move(2, 3).move(1, 11);
	std::cout << my_point.getX() << '\n';*/

	Tiger t(5, "yellow");
	std::cout << t.fight() << '\n'; // ������� ������ � �������, � �� � ��������
	//std::cout << t << '\n';


}