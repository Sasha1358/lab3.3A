// Rational.cpp
#include "Rational.h"

Rational::Rational() : numerator(0), denominator(1) {}
Rational::Rational(int a, int b) : numerator(a), denominator(b) {}
Rational::Rational(const Rational& other) : numerator(other.numerator), denominator(other.denominator) {}
Rational::~Rational() {}

std::ostream& operator<<(std::ostream& out, const Rational& rational) {
    out << rational.numerator << "\\" << rational.denominator;
    return out;
}

std::istream& operator>>(std::istream& in, Rational& rational) {
    in >> rational.numerator >> rational.denominator;
    return in;
}