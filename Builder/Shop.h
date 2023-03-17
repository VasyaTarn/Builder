#pragma once
#include <iostream>
#include "Interface.h"

using namespace std;

class Shop
{
private:
	Interface* builder;
public:
	void setBuilder(Interface* builder);
	void buildCar();
};

