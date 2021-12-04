#ifndef FRACTION_H
#define FRACTION_H

/**
  * Реализовать класс для работы с дробными числами.
  * Он должен содержать:
  * - числитель;
  * - знаменатель;
  * - конструктор;
  * - методы для сложения, вычитания, умножения, деления, сравнения дробных чисел.
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
     * @brief Метод сложения дробей.
     * @param[in] fraction - дробь, которую необходимо суммировать с исходной дробью.
     * @return сумма дробей.
     */
    Fraction add(const Fraction &fraction);

    /**
     * @brief Метод вычисления разности дробей.
     * @param[in] fraction - дробь, которую необходимо вычесть из исходной дроби.
     * @return разность дробей.
     */
    Fraction sub(const Fraction &fraction);

    /**
     * @brief Метод умножения дробей.
     * @param[in] fraction - дробь, которую необходимо перемножить с исходной дробью.
     * @return произведение дробей.
     */
    Fraction mul(const Fraction &fraction);

    /**
     * @brief Метод деления дробей.
     * @param[in] fraction - дробь, на которую необходимо разделить исходную дробь.
     * @return результат деления дробей.
     */
    Fraction div(const Fraction &fraction);

    /**
     * @brief Метод сравнения дробей.
     * @param[in] fraction - дробь, которая сравнивается с исходной дробью.
     * @return 1 - если дроби равны, иначе - 0.
     */
    bool is_equal(const Fraction &fraction);

    /**
     * @brief Метод для вывода объекта класса Fraction на экран.
     */
    void show();

private:
    int _numerator;    ///< Числитель.
    int _denumerator;  ///< Знаменатель.
};


#endif // FRACTION_H
