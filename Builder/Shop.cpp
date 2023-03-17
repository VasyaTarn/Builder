#include "Shop.h"

void Shop::setBuilder(Interface* builder)
{
	this->builder = builder;
}
void Shop::buildCar()
{
	this->builder->produceFrame();
	this->builder->produceEngine();
	this->builder->produceWheels();
	this->builder->produceTransmission();
}
