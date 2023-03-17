#include "Ford.h"

Ford::Ford()
{
	this->reset();
}
Ford::~Ford()
{
	delete product;
}
void Ford::reset()
{
	this->product = new Product2();
}
void Ford::produceFrame() const
{
	this->product->parts.push_back("Coupe");
}
void Ford::produceEngine() const
{
	this->product->parts.push_back("160");
}
void Ford::produceWheels() const
{
	this->product->parts.push_back("14");
}
void Ford::produceTransmission() const
{
	this->product->parts.push_back("4 Auto");
}
Product2* Ford::getProduct()
{
	Product2* result = this->product;
	this->reset();
	return result;
}