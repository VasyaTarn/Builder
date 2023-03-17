#include <iomanip>
#include "Product3.h"

void Product3::carComposition() const
{
	for (int i = 0; i < this->parts.size(); i++)
	{
		cout << setw(15) << left << this->parts[i] << setw(15) << left;
	}

	cout << endl;
}