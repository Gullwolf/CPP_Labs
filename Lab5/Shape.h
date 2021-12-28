#ifndef _SHAPE_H
#define _SHAPE_H
#include <string>
#include <iostream>
#include <sstream>

class Shape {
public:
	Shape() = default;
	virtual ~Shape() = default;
	virtual std::string to_string() const = 0;
	virtual void centre_at(double xIn, double yIn) = 0;

};

class Circle: public Shape {

private:
	double x, y, r;

public:
	Circle(double xIn, double yIn, double rIn);
	~Circle() = default;
	std::string to_string() const;
	void centre_at(double xIn, double yIn);

};

class Rectangle: public Shape {
private:
	double x0, y0, x1, y1;

public:
	Rectangle(double x0In, double y0In, double x1In, double y1In);
	std::string to_string() const;
	void centre_at(double xIn, double yIn);
};

class Triangle: public Shape {
private:
	double x0, y0, x1, y1, x2, y2;

public:
	Triangle(double x0, double y0, double x1, double y1, double x2, double y2);
	std::string to_string() const;
	void centre_at(double xIn, double yIn);

};

#endif //_SHAPE_H
