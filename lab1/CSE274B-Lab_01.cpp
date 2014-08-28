/**
 * CSE274B Lab 01
 *  Created on: Aug 28, 2014
 *      Author: trygstjj
 */
#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
	Rectangle rect;
	Rectangle rect2 = rect;
	Rectangle &refRect = rect;

	rect.set_values(3,4);
	rect2.set_values(5,6);
	refRect.set_values(10,5); //reference

	Rectangle *pRect = new Rectangle();

	pRect->set_values(7,8);

	cout << "area: " << rect.area() << endl;
	cout << "area2: " << rect2.area() << endl;
	cout << "pointer to rect " << pRect << endl;
	cout << "area for pointer: " << pRect->area() << endl;

	return 0;
}
