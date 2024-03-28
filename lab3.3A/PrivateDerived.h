// PrivateDerived.h
#pragma once
#include "Rational.h"

class PrivateDerived : public Rational {
public:
    PrivateDerived();
    PrivateDerived(int a, int b);
    PrivateDerived(const PrivateDerived& other) : Rational(other) {}
    ~PrivateDerived();

    PrivateDerived operator+(const PrivateDerived& other) const;
    PrivateDerived operator-(const PrivateDerived& other) const;
    PrivateDerived operator*(const PrivateDerived& other) const;
    PrivateDerived& operator=(const PrivateDerived& other);
    operator std::string() const;

    PrivateDerived& operator++();
    PrivateDerived operator++(int);
    PrivateDerived& operator--();
    PrivateDerived operator--(int);

    void Reduce();
    double value() const;
};