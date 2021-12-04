#include "fraction_modified.h"

Fraction Fraction::operator+(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        return Fraction(_numerator + fraction._numerator, _denumerator);

    return Fraction(_numerator   * fraction._denumerator +
                    _denumerator * fraction._numerator,
                    _denumerator * fraction._denumerator);
}

Fraction Fraction::operator+=(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        _numerator   += fraction._numerator;
    else
    {
        _numerator   = _numerator   * fraction._denumerator +
                       _denumerator * fraction._numerator;
        _denumerator *= fraction._denumerator;
    }

    return *this;
}


Fraction Fraction::operator-(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        return Fraction(_numerator - fraction._numerator, _denumerator);

    return Fraction(_numerator   * fraction._denumerator -
                    _denumerator * fraction._numerator,
                    _denumerator * fraction._denumerator);
}

Fraction Fraction::operator-=(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        _numerator   -= fraction._numerator;
    else
    {
        _numerator   = _numerator   * fraction._denumerator -
                       _denumerator * fraction._numerator;
        _denumerator *= fraction._denumerator;
    }

    return *this;
}


Fraction Fraction::operator*(const Fraction &fraction)
{
    return Fraction(_numerator   * fraction._numerator,
                    _denumerator * fraction._denumerator);
}

Fraction Fraction::operator*=(const Fraction &fraction)
{

    _numerator   *= fraction._numerator;
    _denumerator *= fraction._denumerator;

    return *this;
}


Fraction Fraction::operator/(const Fraction &fraction)
{
    return Fraction(_numerator   * fraction._denumerator,
                    _denumerator * fraction._numerator);
}

Fraction Fraction::operator/=(const Fraction &fraction)
{
    _numerator   *= fraction._denumerator;
    _denumerator *= fraction._numerator;

    return *this;
}


bool Fraction::operator==(const Fraction &fraction)
{
    if ((_numerator == fraction._numerator && _denumerator == fraction._denumerator) ||
        (static_cast<double>(_numerator) / _denumerator == static_cast<double>(fraction._numerator) / fraction._denumerator))
        return true;
    else
        return false;
}


void Fraction::show()
{
    std::cout << _numerator << "/" << _denumerator << " = " << static_cast<double>(_numerator) / _denumerator << "\n";
}
