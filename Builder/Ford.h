#pragma once
#include <iostream>
#include "Interface.h"
#include "Product2.h"

using namespace std;

class Ford : public Interface
{
private:
	Product2* product;
public:
	Ford();
	~Ford();
	void reset();
	void produceFrame() const override;
	void produceEngine() const override;
	void produceWheels() const override;
	void produceTransmission() const override;
	Product2* getProduct();
};

