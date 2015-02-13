#include "rectangle.h"

Rectangle::Rectangle(){

	length = width = 1;
	perimeter = area = 1;
}

void Rectangle::setLength(int x){

	bool lengthTest = false;

	while(!lengthTest){
		if(x > 0 && x <= 25){
			lengthTest = true;
			length = x;
		}
		if(x < 0 && x >= 25){
			cout << "The value " << x << " is out of range.";
			cout << "Try again. Choose a length from 1 to 25:";
			cin >> x;
			lengthTest = false;
		}
	}
}

int Rectangle::getLength(){

	return length;
}

void Rectangle::setWidth(int y){

	bool widthTest = false;

	while(!widthTest){
		if(y > 0 && y <= 25){
			widthTest = true;
			width = y;
		}
		else
		{
			cout << "The value " << y << " is out of range.";
			cout << "Try again. Choose a width from 1 to 25:";
			cin >> y;
			widthTest = false;
		}
	}
}

int Rectangle::getWidth()

	return width;
}

void Rectangle::findPerimeter(){

	perimeter = 2*(length*width);
	cout << "The perimeter of the recatngle is: " << perimeter << endl;
}

void Rectangle::findArea(){

	area = length*width;
	cout << "The area of the triangle is: " << area << endl;
}

void Rectangle::draw(){

	cout << "Enter the character you would like to use as the border:";
	cin >> border;
	cout << "Enter the symbol to fill the rectangle:";
	cin >> fill;

	for(int i = 0; i < length; i++){
		for(int j = 0; j < width; j++){
			if(i == 0 || i == length - 1){
				cout << border;
			}else
			if(j == 0 || j == width -1){
				cout << border;
			}
			else
			{
				cout << fill;	
			}
		}
		cout << "\n";
	}
}
