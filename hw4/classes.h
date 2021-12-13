/**
 * Создайте иерархию классов на основе класса Фигура.
 * Должны быть описаны классы Квадрат, Прямоугольник, Треугольник, Круг, Куб, Шар.
 * Необходимо:
 * ~ реализовать конструкторы;
 * ~ методы, выводящие информацию о фигуре (название и тип);
 * ~ методы, считающие площадь, периметр и объем (если он есть).
 */

#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <cstring>
#include <cmath>

/**
 * @brief Базовый класс: Фигура.
 */
class Figure
{
public:
    enum TypeOfFigure
    {
        UNKNOWN   = 0,
        SQUARE    = 1,
        RECTANGLE = 2,
        TRIANGLE  = 3,
        CIRCLE    = 4,
        CUBE      = 5,
        BALL      = 6
    };

    /**
     * @brief Конструктор.
     */
    Figure(std::string name) : _name(name), _type(UNKNOWN) {}

    /**
     * @brief Деструктор.
     */
    ~Figure() {}

    /**
     * @brief Получение названия фигуры.
     * @return название фигуры.
     */
    std::string getName();

    /**
     * @brief Получение информации о типе фигуры.
     * @param[in] type - тип фигуры.
     * @return строка с информацией о типе фигуры.
     */
    std::string getType();

    /**
     * @brief Вывод информации о фигуре на экран.
     */
    void print();

protected:
    std::string  _name;    ///< Название фигуры.
    TypeOfFigure _type;    ///< Тип фигуры.
};


/**
 * @brief Класс-наследник: Квадрат.
 */
class Square: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Square(std::string name, double lenght) : Figure(name)
    {
        _type = SQUARE;
        _side = lenght;
    }

    /**
     * @brief Расчёт площади квадрата.
     */
    double calcArea();

    /**
     * @brief Расчёт периметра квадрата.
     */
    double calcPerimeter();

    void print();

private:
        double _side;    ///< Длина стороны квадрата.
};


/**
 * @brief Класс-наследник: Прямоугольник.
 */
class Rectangle: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Rectangle(std::string name, double lenght, double width) : Figure(name)
    {
        _type   = RECTANGLE;
        _lenght = lenght;
        _width  = width;
    }

    /**
     * @brief Расчёт площади прямоугольника.
     */
    double calcArea();

    /**
     * @brief Расчёт периметра прямоугольника.
     */
    double calcPerimeter();

    void print();

private:
        double _lenght;    ///< Длина прямоугольника.
        double _width;     ///< Ширина прямоугольника.
};


/**
 * @brief Класс-наследник: Треугольник.
 */
class Triangle: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Triangle(std::string name, double a, double b, double c) : Figure(name)
    {
        _type   = TRIANGLE;
        _side_a = a;
        _side_b = b;
        _side_c = c;
    }

    /**
     * @brief Расчёт площади треугольника по формуле Герона.
     */
    double calcArea();

    /**
     * @brief Расчёт периметра треугольника.
     */
    double calcPerimeter();

    void print();

private:
        double _side_a, _side_b, _side_c;    ///< Cтороны треугольника.
};


/**
 * @brief Класс-наследник: Круг.
 */
class Circle: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Circle(std::string name, double radius) : Figure(name)
    {
        _type   = CIRCLE;
        _radius = radius;
    }

    /**
     * @brief Расчёт площади круга.
     */
    double calcArea();

    /**
     * @brief Расчёт периметра круга.
     */
    double calcPerimeter();

    void print();

private:
        double _radius;    ///< Радиус круга.
};


/**
 * @brief Класс-наследник: Куб.
 */
class Cube: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Cube(std::string name, double lenght) : Figure(name)
    {
        _type   = CUBE;
        _lenght = lenght;
    }

    /**
     * @brief Расчёт площади куба.
     */
    double calcArea();

    /**
     * @brief Расчёт периметра куба.
     */
    double calcPerimeter();

    /**
     * @brief Расчёт объёма куба.
     */
    double calcVolume();

    void print();

private:
        double _lenght;    ///< Длина ребра куба.
};


/**
 * @brief Класс-наследник: Шар.
 */
class Ball: public Figure
{
public:
    /**
     * @brief Конструктор.
     */
    Ball(std::string name, double radius) : Figure(name)
    {
        _type   = BALL;
        _radius = radius;
    }

    /**
     * @brief Расчёт площади шара.
     */
    double calcArea();

    /**
     * @brief Расчёт объёма шара.
     */
    double calcVolume();

    void print();

private:
        double _radius;    ///< Радиус шара.
};

#endif // CLASSES_H
