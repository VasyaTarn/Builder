#pragma once
#include <iostream>
#include "Interface.h"
#include "Product1.h"

using namespace std;

class Daewoo : public Interface
{
private:
	Product1* product;
public:
	Daewoo();
	~Daewoo();
	void reset();
	void produceFrame() const override;
	void produceEngine() const override;
	void produceWheels() const override;
	void produceTransmission() const override;
	Product1* getProduct();
};

