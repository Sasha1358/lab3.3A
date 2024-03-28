#pragma once
#include <iostream>

class Rational {
private:
    int numerator;
    int denominator;

public:
    Rational();
    Rational(int a, int b);
    Rational(const Rational& other);
    ~Rational();

    int getNumerator() const { return numerator; }
    void setNumerator(int num) { numerator = num; }

    int getDenominator() const { return denominator; }
    void setDenominator(int denom) { denominator = denom; }

    friend std::ostream& operator<<(std::ostream& out, const Rational& rational);
    friend std::istream& operator>>(std::istream& in, Rational& rational);
};