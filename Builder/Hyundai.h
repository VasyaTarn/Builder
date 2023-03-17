#pragma once
#include <iostream>
#include "Interface.h"
#include "Product4.h"

using namespace std;

class Hyundai : public Interface
{
private:
	Product4* product;
public:
	Hyundai();
	~Hyundai();
	void reset();
	void produceFrame() const override;
	void produceEngine() const override;
	void produceWheels() const override;
	void produceTransmission() const override;
	Product4* getProduct();

};

