// PublicDerived.cpp
#include "PublicDerived.h"
#include <iostream>
#include <sstream>

PublicDerived::PublicDerived() : Rational() {}
PublicDerived::PublicDerived(int a, int b) : Rational(a, b) {}
PublicDerived::~PublicDerived() {}

PublicDerived PublicDerived::operator+(const PublicDerived& other) const {
    return PublicDerived(getNumerator() * other.getDenominator() + other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
}

PublicDerived PublicDerived::operator-(const PublicDerived& other) const {
    return PublicDerived(getNumerator() * other.getDenominator() - other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
}

PublicDerived PublicDerived::operator*(const PublicDerived& other) const {
    return PublicDerived(getNumerator() * other.getNumerator(), getDenominator() * other.getDenominator());
}

PublicDerived& PublicDerived::operator=(const PublicDerived& other) {
    if (this != &other) {
        Rational::operator=(other);
    }
    return *this;
}

PublicDerived::operator std::string() const {
    std::ostringstream oss{};
    oss << "A = " << getNumerator() << ", B = " << getDenominator();
    return oss.str();
}

PublicDerived& PublicDerived::operator++() {
    setNumerator(getNumerator() + getDenominator());
    return *this;
}

PublicDerived PublicDerived::operator++(int) {
    PublicDerived temp = *this;
    setNumerator(getNumerator() + getDenominator());
    return temp;
}

PublicDerived& PublicDerived::operator--() {
    setNumerator(getNumerator() - getDenominator());
    return *this;
}

PublicDerived PublicDerived::operator--(int) {
    PublicDerived temp = *this;
    setNumerator(getNumerator() - getDenominator());
    return temp;
}

void PublicDerived::Reduce() {
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

double PublicDerived::value() const {
    return static_cast<double>(getNumerator()) / getDenominator();
}