#pragma once
#include<string>
#include<iostream>

class Animal {
public:
	Animal() {
		std::cout << "Animal constructor" << '\n';
	}
	~Animal() {
		std::cout << "~Animal distructor" << '\n';
	}
	int fight() {
		return strenght;
	}
	int run() {
		return speed;
	}
	void eat() {
		std::cout << "Animal have eaten" << '\n';
	}

private:
	int strenght = 10;
	int speed = 5;

};
// ����� ������ ��������� ����� ������
class Tiger : public Animal
{
public:
	
	Tiger(int height, const std::string& color){
		std::cout << "Tiger constructor" << '\n';
		_height = height;
		_color = color;
	}
	~Tiger() {
		std::cout << "~Tiger distructor" << '\n';
	}
	void setHeight(int height) {
		_height = height;
	}
	// ����� �� ������ �������� ���� ������
	int getHeight() const {
		// _height = 5; - compile error
		// setHeight(10); - ������������� �������, ������
		return _height;
	}
	const std::string& getColor() {
		return _color;
	}
	friend std::ostream& operator<<(std::ostream& os, Tiger& t) {
		os << t.getHeight() << " " << t.getColor();
		return os;
	}
	int fight() {
		return _strenght;
	}
private:
	int _height;
	std::string _color;
	int _strenght = 50;
};

