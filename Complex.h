#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
private:
    /* data */
    double _real;
    double _img;

public:
    Complex();
    Complex(double real, double img);
    ~Complex();
    void Display();
};

#endif