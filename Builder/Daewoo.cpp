#include "Daewoo.h"

Daewoo::Daewoo()
{
	this->reset();
}
Daewoo::~Daewoo()
{
	delete product;
}
void Daewoo::reset()
{
	this->product = new Product1();
}
void Daewoo::produceFrame() const
{
	this->product->parts.push_back("Sedan");
}
void Daewoo::produceEngine() const
{
	this->product->parts.push_back("98");
}
void Daewoo::produceWheels() const
{
	this->product->parts.push_back("13");
}
void Daewoo::produceTransmission() const
{
	this->product->parts.push_back("5 Manual");
}
Product1* Daewoo::getProduct()
{
	Product1* result = this->product;
	this->reset();
	return result;
}