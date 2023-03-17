#include "UAZ.h"

UAZ::UAZ()
{
	this->reset();
}
UAZ::~UAZ()
{
	delete product;
}
void UAZ::reset()
{
	this->product = new Product3();
}
void UAZ::produceFrame() const
{
	this->product->parts.push_back("Station wagon");
}
void UAZ::produceEngine() const
{
	this->product->parts.push_back("120");
}
void UAZ::produceWheels() const
{
	this->product->parts.push_back("16");
}
void UAZ::produceTransmission() const
{
	this->product->parts.push_back("4 Manual");
}
Product3* UAZ::getProduct()
{
	Product3* result = this->product;
	this->reset();
	return result;
}