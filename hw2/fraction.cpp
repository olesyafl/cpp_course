#include "fraction.h"

Fraction Fraction::add(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        return Fraction(_numerator + fraction._numerator, _denumerator);

    return Fraction(_numerator   * fraction._denumerator +
                    _denumerator * fraction._numerator,
                    _denumerator * fraction._denumerator);
}


Fraction Fraction::sub(const Fraction &fraction)
{
    if (_denumerator == fraction._denumerator)
        return Fraction(_numerator - fraction._numerator, _denumerator);

    return Fraction(_numerator   * fraction._denumerator -
                    _denumerator * fraction._numerator,
                    _denumerator * fraction._denumerator);
}


Fraction Fraction::mul(const Fraction &fraction)
{
    return Fraction(_numerator   * fraction._numerator,
                    _denumerator * fraction._denumerator);
}


Fraction Fraction::div(const Fraction &fraction)
{
    return Fraction(_numerator   * fraction._denumerator,
                    _denumerator * fraction._numerator);
}


bool Fraction::is_equal(const Fraction &fraction)
{
    if (_numerator == fraction._numerator && _denumerator == fraction._denumerator)
        return true;
    else
        return false;
}


void Fraction::show()
{
    std::cout << _numerator << "/" << _denumerator << " = " << static_cast<double>(_numerator) / _denumerator << "\n";
}
