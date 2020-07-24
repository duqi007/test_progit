#include <iostream>
#include "Complex.h"

Complex::Complex(){
}

Complex::Complex(double real, double img){
    this->_real = real;
    this->_img = img;
}

Complex::~Complex(){
}

void Complex::Display(){
    std::cout << "(" << _real << " , " << _img << "i)" << std::endl;
}
