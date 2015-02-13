#include "rectangle.h"

int main(){

	int length;
	int width;
	Rectangle r;

	cout << "Enter the length of the rectangle from 1 to 25: ";
	cin >> length;
	r.setLength(length);
	
	cout << "Enter the width of the rectangle from 1 to 25: ";
	cin >> width;
	r.setWidth(width);

	r.findPerimeter(length, width);
	r.findArea(length, width);
	r.draw();

}
