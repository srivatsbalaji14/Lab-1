#include "../header/triangle.hpp"

void Triangle::set_base(int b) {
    this->base = b;
}

void Triangle::set_height(int h) {
    this->height = h;
}

double Triangle::area() {
    return  this->base * this->height / 2.0 ;
}