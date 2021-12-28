#include <iostream>
#include <stdlib.h>
#include "Shape.h"
#include <sstream>
#include <math.h>

//Circle Constructor
Circle::Circle(double xIn, double yIn, double rIn): x(xIn), y(yIn), r(rIn){}

//Circle to_string
std::string Circle::to_string() const{

	std::stringstream outputStream;
	outputStream << "Circle centered at (" << x << ", " << y << ") with radius " << r;
	std::string outputString = outputStream.str();

	return outputString;
}

//Circle Change Centre
void Circle::centre_at(double xIn, double yIn){

	x = xIn;
	y = yIn;

}

//Rectangle Constructor
Rectangle::Rectangle(double x0In, double y0In, double x1In, double y1In): x0(x0In), x1(x1In), y0(y0In), y1(y1In){}

//Rectangle to_string
std::string Rectangle::to_string() const{
	double width = abs(x1 - x0);
	double height = abs(y1 - y0);

	std::stringstream outputStream;
	outputStream << "Rectangle at [(" << x0 << ", " << y0 << "), (" << x1 << ", " << y1 << ")] with width " << width << ", height " << height;
	std::string outputString = outputStream.str();

	return outputString; 
}

//Rectangle Change Centre
void Rectangle::centre_at(double xIn, double yIn){

	double currentCentreX = x0 + ((x1 - x0)/2);
	double currentCentreY = y0 + ((y1 - y0)/2);

	double changeX = (xIn - currentCentreX);
	double changeY = (yIn - currentCentreY);

	x0 = (x0 + changeX);
	x1 = (x1 + changeX);

	y0 = (y0 + changeY);
	y1 = (y1 + changeY);

}

//Triangle Constructor
Triangle::Triangle(double x0In, double y0In, double x1In, double y1In, double x2In, double y2In): x0(x0In), x1(x1In), x2(x2In), y0(y0In), y1(y1In), y2(y2In){}

//Triangle to_string
std::string Triangle::to_string() const{
	double side0 = sqrt((pow((x1 - x0), 2) + (pow((y1 - y0), 2))));
	double side1 = sqrt((pow((x2 - x1), 2) + (pow((y2 - y1), 2))));
	double side2 = sqrt((pow((x2 - x0), 2) + (pow((y2 - y0), 2))));

	std::stringstream outputStream;
	outputStream << "Triangle at [(" << x0 << ", " << y0 << "), (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")] with side lengths " << side2 << ", " << side1 << ", and " << side0;
	std::string outputString = outputStream.str();

	return outputString; 
}

//Triangle Change Centre
void Triangle::centre_at(double xIn, double yIn){

	double centreX = ((x0 + x1 + x2)/3);
	double centreY = ((y0 + y1 + y2)/3);

	double changeX = xIn - centreX;
	double changeY = yIn - centreY;

	x0 = (x0 + changeX);
	x1 = (x1 + changeX);
	x2 = (x2 + changeX);

	y0 = (y0 + changeY);
	y1 = (y1 + changeY);
	y2 = (y2 + changeY);


}
