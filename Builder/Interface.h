#pragma once
#include <iostream>

using namespace std;

class Interface
{
public:
	virtual ~Interface() {};
	virtual void produceFrame() const = 0;
	virtual void produceEngine() const = 0;
	virtual void produceWheels() const = 0;
	virtual void produceTransmission() const = 0;
};

