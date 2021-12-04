#ifndef FRACTION_H
#define FRACTION_H

/**
  * Модифициоровать класс для работы с дробными числами.
  * Он должен содержать:
  * - числитель;
  * - знаменатель;
  * - конструктор, деструктор;
  * - перегруженнные операторы для сложения, вычитания, умножения, деления,
  * сравнения дробных чисел, операторов +=, -=, *=, /=.
  */

#include <iostream>
#include <cassert>

class Fraction
{
public:
    /**
     * @brief Конструктор по умолчанию.
     */
    Fraction() : _numerator(0), _denumerator(1) {}

    /**
     * @brief Конструктор с параметрами.
     * @param[in] numerator   - числитель;
     * @param[in] denumerator - знаменатель.
     */
    Fraction(int numerator, int denumerator = 1)
    {
        assert(denumerator != 0);
        _numerator   = numerator;
        _denumerator = denumerator;
    }

    /**
     * @brief Деструктор.
     */
    ~Fraction() {}

    /**
     * @brief Перегрузка оператора сложения.
     */
    Fraction operator+(const Fraction &fraction);
    Fraction operator+=(const Fraction &fraction);

    /**
     * @brief Перегрузка оператора вычитания.
     */
    Fraction operator-(const Fraction &fraction);
    Fraction operator-=(const Fraction &fraction);

    /**
     * @brief Перегрузка оператора умножения.
     */
    Fraction operator*(const Fraction &fraction);
    Fraction operator*=(const Fraction &fraction);

    /**
     * @brief Перегрузка оператора деления.
     */
    Fraction operator/(const Fraction &fraction);
    Fraction operator/=(const Fraction &fraction);

    /**
     * @brief  Перегрузка оператора сравнения.
     */
    bool operator==(const Fraction &fraction);

    /**
     * @brief Метод для вывода объекта класса Fraction на экран.
     */
    void show();

private:
    int _numerator;    ///< Числитель.
    int _denumerator;  ///< Знаменатель.
};


#endif // FRACTION_H
