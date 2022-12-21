#pragma once
#include<string>
class Book
{
public:
	Book(int size, std::string& name) {

	}
	int getSize() {
		return V;
	}
	const std::string& getName() {
		return name;
	}
private:
	int V = 10;
	std::string name;
};

class Book2 : Book
{
public:
	const std::string& getAutor() {
		return autor;
	}
	const std::string& getJanre() {
		return janre;
	}
private:
	std::string autor;
	std::string janre;
};
class Book3 : Book3
{
public:
	int height() {
		return x;
	}
	int whight() {
		return y;
	}
	private:
	int x = 100;
	int y = 200;
};

