// PrivateDerived.cpp
#include "PrivateDerived.h"
#include <iostream>
#include <sstream>

PrivateDerived::PrivateDerived() : Rational() {}
PrivateDerived::PrivateDerived(int a, int b) : Rational(a, b) {}
PrivateDerived::~PrivateDerived() {}

PrivateDerived PrivateDerived::operator+(const PrivateDerived& other) const {
    return PrivateDerived(getNumerator() * other.getDenominator() + other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
}

PrivateDerived PrivateDerived::operator-(const PrivateDerived& other) const {
    return PrivateDerived(getNumerator() * other.getDenominator() - other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
}

PrivateDerived PrivateDerived::operator*(const PrivateDerived& other) const {
    return PrivateDerived(getNumerator() * other.getNumerator(), getDenominator() * other.getDenominator());
}

PrivateDerived& PrivateDerived::operator=(const PrivateDerived& other) {
    if (this != &other) {
        Rational::operator=(other);
    }
    return *this;
}

PrivateDerived::operator std::string() const {
    std::ostringstream oss;
    oss << "A = " << getNumerator() << ", B = " << getDenominator();
    return oss.str();
}

PrivateDerived& PrivateDerived::operator++() {
    setNumerator(getNumerator() + getDenominator());
    return *this;
}

PrivateDerived PrivateDerived::operator++(int) {
    PrivateDerived temp = *this;
    setNumerator(getNumerator() + getDenominator());
    return temp;
}

PrivateDerived& PrivateDerived::operator--() {
    setNumerator(getNumerator() - getDenominator());
    return *this;
}

PrivateDerived PrivateDerived::operator--(int) {
    PrivateDerived temp = *this;
    setNumerator(getNumerator() - getDenominator());
    return temp;
}

void PrivateDerived::Reduce() {
    int gcd = 1;
    int smaller = (getNumerator() < getDenominator()) ? getNumerator() : getDenominator();

    for (int i = 2; i <= smaller; ++i) {
        if (getNumerator() % i == 0 && getDenominator() % i == 0) {
            gcd = i;
        }
    }

    if (gcd > 1) {
        setNumerator(getNumerator() / gcd);
        setDenominator(getDenominator() / gcd);
    }
}

double PrivateDerived::value() const {
    return static_cast<double>(getNumerator()) / getDenominator();
}

std::ostream& operator<<(std::ostream& out, const PrivateDerived& privateDerived) {
    out << static_cast<const Rational&>(privateDerived);
    return out;
}

std::istream& operator>>(std::istream& in, PrivateDerived& privateDerived) {
    int a, b;
    std::cout << "Enter numerator: ";
    in >> a;
    std::cout << "Enter denominator: ";
    in >> b;
    privateDerived.setNumerator(a);
    privateDerived.setDenominator(b);
    return in;
}
