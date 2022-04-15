#include"Data.h"

Data::Data()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->o = 0;
}
	
Data::Data(double x, double y, double z, int o)
{
	this->x=x;
	this->y=y;
	this->z = z;
	this->o = o;
}

double Data::getX(void) {
	return x;
}
	
double Data::getY(void) {
	return y;
}
	
double Data::getZ(void) {
	return z;
}
	
int Data::getO(void) {
	return o;
}
	
void Data::setX(double x) {
	this->x = x;
}
	
void Data::setY(double y) {
	this->y = y;
}
	
void Data::setZ(double z) {
	this->z = z;
}
	
void Data::setO(int o) {
	this->o = o;
}
	
double Data::getDistanceFrom(Data point)
{
	return( sqrt((pow((point.getX() - this->x),2) + pow((point.getY() - this->y),2) + pow((point.getZ() - this->z),2))));
}

//Data& Data::operator=(Data& point)
//{
//	if (this != &point)
//	{
//		x = point.x;
//		y = point.y;
//		z = point.z;
//		o = point.o;
//	}
//	return *this;
//}
//Data::Data(Data &point) {
//	x = point.x;
//	y = point.y;
//	z = point.z;
//}