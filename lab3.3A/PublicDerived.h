// PublicDerived.h
#pragma once
#include "Rational.h"

class PublicDerived : public Rational {
public:
    PublicDerived();
    PublicDerived(int a, int b);
    PublicDerived(const PublicDerived& other) : Rational(other) {}
    ~PublicDerived();

    PublicDerived operator+(const PublicDerived& other) const;
    PublicDerived operator-(const PublicDerived& other) const;
    PublicDerived operator*(const PublicDerived& other) const;
    PublicDerived& operator=(const PublicDerived& other);

    operator std::string() const;

    PublicDerived& operator++();
    PublicDerived operator++(int);
    PublicDerived& operator--();
    PublicDerived operator--(int);

    void Reduce();
    double value() const;
};
