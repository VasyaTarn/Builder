#pragma once
#include <iostream>
#include "Interface.h"
#include "Product3.h"

using namespace std;

class UAZ : public Interface
{
private:
	Product3* product;
public:
	UAZ();
	~UAZ();
	void reset();
	void produceFrame() const override;
	void produceEngine() const override;
	void produceWheels() const override;
	void produceTransmission() const override;
	Product3* getProduct();
};

