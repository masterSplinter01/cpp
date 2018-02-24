#include <cstdlib>
#include "rational.h"

rational::rational(int number)
        : _nominator(number), _denominator(1)
{ /*EMPTY*/}

rational::rational(int nominator, unsigned int denominator)
        : _nominator(nominator), _denominator(denominator) {
    this->simplify();
}

int rational::gcd(int a, int b) { //calculating greatest common divisor
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

rational& rational::add(const rational &other) {
    int new_nominator;
    unsigned new_denominator;
    new_nominator = _nominator * other.denominator() + other.nominator() * _denominator;
    new_denominator = _denominator * other.denominator();

    rational* result = new rational(new_nominator, new_denominator);

    result->simplify();

    return *result;
}

rational& rational::multiply(const rational &other) {
    int new_nominator = _nominator * other.nominator();
    unsigned  new_denominator = _denominator * other.denominator();
    rational* result = new rational(new_nominator, new_denominator);
    result->simplify();
    return *result;
}



bool rational::equals(const rational &other) const {
    return ((_nominator == static_cast<int> (other.nominator()) && (_denominator == static_cast<int>(other.denominator()))) );

}

bool rational::less(const rational &other) const {
    //unsigned int common_denom = _denominator * other.denominator();
    int common_nom1 = _nominator * other.denominator();
    int common_nom2 = other.nominator() * _denominator;

    return  (common_nom1 < common_nom2);
}

rational& rational::negate() {
    auto res = new rational(_nominator*(-1));
    return *res;

}

bool rational::negative() const {
    return (_nominator < 0);
}

unsigned int rational::nominator() const {
    return _nominator < 0 ? 0-_nominator : _nominator;
}

unsigned int rational::denominator() const {
    return _denominator;
}

int rational::toInt() const {
    auto res = static_cast<int> (_nominator/_denominator);
    return res;
}

void rational::simplify() {
    int current_gcd = gcd(_nominator, _denominator);
    _nominator = _nominator/current_gcd;
    _denominator = _denominator/current_gcd;
}

rational& rational::multiply(const int other) {
    auto res = new rational(other*this->_nominator);
    return *res;

}
/*
bool rational::operator < (rational other) {
    return (this->less(other));
}

bool rational::operator > (rational other) {
    return (! this->less(other));
}

bool rational::operator == (rational other) {
    return this->equals(other);
}

bool rational::operator != (rational other) {
    return (!this->equals(other));
}

bool rational::operator <= (rational other) {
    return (this->equals(other) || this->less(other));
}

bool rational::operator>=(rational other) {
    return (this->equals(other) || !(this->less(other)));
}
rational rational::operator+(rational other) {
    return this->add(other);
}

rational rational::operator-(rational other) {
    return this->add(other.negate());
}


void rational::operator += (rational other) {
    auto res = this->add(other);
    _nominator = res.nominator();
    _denominator = res.denominator();
}

void rational::operator-=(rational other) {
    auto res = this->add(other.negate());
    _nominator = res.nominator();
    _denominator = res.denominator();
}

rational rational::operator*(rational other) {
    return this->multiply(other);
}

void rational::operator*=(rational other) {
    auto res = this->multiply(other);
    _nominator = res.nominator();
    _denominator = res.denominator();
}

bool rational::operator==(const int other) {
    auto temp_rational = new rational(other);
    return this->equals(*temp_rational);
}

void rational::operator+=(const int other) {
    auto res = this->add(other);
    _nominator = res.nominator();
    _denominator = res.denominator();
}

void rational::operator-=(const int other) {
    auto res = this->add(other*(-1));
    _nominator = res.nominator();
    _denominator = res.denominator();
}

void rational::operator*=(const int other) {
    auto res = this->multiply(other);
    _nominator = res.nominator();
    _denominator = res.denominator();
}*/
 //int rational::operator int() {
   //  return this->toInt();
 //}



