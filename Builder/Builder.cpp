#include <iostream>
#include <iomanip>
#include "Shop.h"
#include "Daewoo.h"
#include "Ford.h"
#include "Hyundai.h"
#include "UAZ.h"

using namespace std;

void clientCode(Shop& shop)
{
	Daewoo* daewoo = new Daewoo();
	Ford* ford = new Ford();
	UAZ* uaz = new UAZ();
	Hyundai* hyundai = new Hyundai();

	cout << setw(15) << left << "Name mechanism" << setw(15) << left << "Frame" << setw(15) << left << "Engine" << setw(15) << left << "Wheels" << setw(15) << left << "Transmission" << setw(15) << left << endl;

	shop.setBuilder(daewoo);
	cout << "Daewoo Lanos:";
	shop.buildCar();
	Product1* prod1 = daewoo->getProduct();
	prod1->carComposition();

	shop.setBuilder(ford);
	cout << "Ford Probe:";
	shop.buildCar();
	Product2* prod2 = ford->getProduct();
	prod2->carComposition();

	shop.setBuilder(uaz);
	cout << "UAZ Patriot:";
	shop.buildCar();
	Product3* prod3 = uaz->getProduct();
	prod3->carComposition();

	shop.setBuilder(hyundai);
	cout << "Hyundai Getz:";
	shop.buildCar();
	Product4* prod4 = hyundai->getProduct();
	prod4->carComposition();


	delete prod1;
	delete prod2;
	delete prod3;
	delete prod4;
}

int main()
{
	Shop* shop = new Shop();
	clientCode(*shop);
	delete shop;

	return 0;
}


