/**
  * Реализовать односвязный список, обладающий следующим функционалом:
  * - добавление элементов в конец списка;
  * - добавление элементов в начало списка;
  * - вывод элементов списка;
  * - получение количества элементов списка;
  * - вставление элемента на указанную позицию;
  * - удаление всех элементов;
  * - удаление первого элемента списка;
  * - удаление последнего элемента списка;
  * - удаление элемента на указанной позиции;
  * - удаление элементов в диапозоне между двумя указанными позициями.
  */

#ifndef LIST_H
#define LIST_H

#include <iostream>

class List
{
public:
    struct Link
    {
      int   data;     ///< Значение элемента списка.
      Link* next;     ///< Указатель на следующий элемент списка.
    };

    /**
     * @brief Конструктор.
     */
    List() : first(nullptr), count(0) {}

    /**
      * @brief Деструктор.
      */
    ~List()
    {
        clear();
    }

    /**
     * @brief Получение количества элементов списка.
     */
    int get_count();

    /**
     * @brief Проверка наличия элементов в списке.
     */
    bool is_empty();

    /**
     * @brief Добавление элементов в начало списка.
     */
    void push_front(int);

    /**
     * @brief Добавление элементов в конец списка.
     */
    void push_back(int);

    /**
     * @brief Вставка элемента на указанную позицию.
     */
    void insert(int, int);

    /**
     * @brief Удаление первого элемента списка.
     */
    void pop_front();

    /**
     * @brief Удаление последнего элемента списка.
     */
    void pop_back();

    /**
     * @brief Удаление элемента на указанной позиции.
     * А также реализована перегрузка функции для удаления элементов в указанном диапазоне.
     */
    void pop(int);
    void pop(int, int);

    /**
     * @brief Удаление всех элементов.
     */
    void clear();

    /**
     * @brief Вывод элементов списка.
     */
    void show();

private:
    Link* first;      ///< Указатель на первый элемент списка.
    int   count;      ///< Счётчик количества элементов списка.

};

#endif // LIST_H
