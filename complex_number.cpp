// complex_number.cpp
#include <complex>

class ComplexNumber {
public:
    ComplexNumber(double real, double imag) : number_(real, imag) {}

    double real() const { return number_.real(); }
    double imag() const { return number_.imag(); }

    void set_real(double real) { number_.real(real); }
    void set_imag(double imag) { number_.imag(imag); }

private:
    std::complex<double> number_;
};
