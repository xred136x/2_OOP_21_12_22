#pragma once
#include<string>


class Point
{
public:
	//Point(int x, int y): _x(x), _y(y){}
	explicit Point(int x, int y, std::string str) : _x(x), _y(y), _str(str) {}
	//в большинстве случаев this можно не использовать

	// пишется в сpр.
	int getX() {
		//return this->_x; 
		return (*this)._x;
	}

	void setX(int x) {
		this->_x = x;
	}
	Point& move(int x, int y) {
		_x += x;
		_y += y;
		return *this;
	}


private:
	int _x;
	int _y;
	std::string _str;
	
};