// Project		Exercises 2. semester
//
// File			Point.cpp
//
// Description	Implementation of class Point
//
// Author		NVJ
//
// Version		1.0 - 230204 - original version

#include "Point.h"


Point::Point( double x, double y )
{
	setX( x );
	setY( y );
}


void Point::setX( double xCoor )
{
	if( xCoor < 0 || 100 < xCoor )
	{
		cout << "\nFejl i x-koordinaten. x sat til 0.0\n";
		xCoor = 0.0;
	}

	x_ = xCoor;
}


void Point::setY( double yCoor )
{
	if( yCoor < 0 || 100 < yCoor )
	{
		cout << "\nFejl i y-koordinaten. y sat til 0.0\n";
		yCoor = 0.0;
	}

	y_ = yCoor;
}


double Point::getX() const
{
	return x_;
}


double Point::getY() const
{
	return y_;
}


void Point::print() const
{
	cout << "(" << x_ << " , " << y_ << ")";
}

void Point::operator+=(const Point &b)
{
	x_ += b.getX();
	y_ += b.getY();
}

// FRIEND FUNCTIONS:

ostream & operator<<(ostream & output, const Point &point)
{
	output << "(" << point.x_ << " , " << point.y_ << ")";
	return output;
}

Point operator/(const Point &point, int number)
{
	double tempX = point.x_ / number;
	double tempY = point.y_ / number;
	return Point(tempX, tempY);
}
