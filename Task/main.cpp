#include "stdafx.h"
#include "Combination.h"
#include "Boat.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	boat boat(25, 5, 1500, 100, 900, 10, 150);
	boat.start();
	boat.print();

	system("pause");
	return 0;
}