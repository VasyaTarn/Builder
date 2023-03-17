#include "Hyundai.h"

Hyundai::Hyundai()
{
	this->reset();
}
Hyundai::~Hyundai()
{
	delete product;
}
void Hyundai::reset()
{
	this->product = new Product4();
}
void Hyundai::produceFrame() const
{
	this->product->parts.push_back("Hatchback");
}
void Hyundai::produceEngine() const
{
	this->product->parts.push_back("66");
}
void Hyundai::produceWheels() const
{
	this->product->parts.push_back("13");
}
void Hyundai::produceTransmission() const
{
	this->product->parts.push_back("4 Auto");
}
Product4* Hyundai::getProduct()
{
	Product4* result = this->product;
	this->reset();
	return result;
}