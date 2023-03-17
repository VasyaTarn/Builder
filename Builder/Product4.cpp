#include <iomanip>
#include "Product4.h"

void Product4::carComposition() const
{
	for (int i = 0; i < this->parts.size(); i++)
	{
		cout << setw(15) << left << this->parts[i] << setw(15) << left;
	}

	cout << endl;
}