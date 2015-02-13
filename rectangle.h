#include <iostream>

using namespace std;

class Rectangle {

        public:
                Rectangle();
                void setLength(int x);
                int getLength();
                void setWidth(int y);
                int getWidth();
                void findPerimeter();
                void findArea();
                void draw();

        private:
                int length;
                int width;
                int petimeter;
                int area;
                char border;
                char fill;
};
