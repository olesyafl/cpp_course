#include "list.h"

int main()
{
    List list;

    // добавление элементов в начало списка
    list.push_front(15);                                         // Получаем в консоли:
    list.push_front(22);                                         //             > 123
    list.push_front(123);                                        //             > 22
    list.show();                                                 //             > 15
    std::cout << "Count = " << list.get_count() << std::endl;    //             > Count = 3
    std::cout << std::endl;

    // добавление элементов в конец списка                       // В консоли:  > 123
    list.push_back(175);                                         //             > 22
    list.push_back(99);                                          //             > 15
    list.push_back(1);                                           //             > 175
    list.show();                                                 //             > 99
    std::cout << "Count = " << list.get_count() << std::endl;    //             > 1
    std::cout << std::endl;                                      //             > Count = 6

    // вставка элемента на указанную позицию                     // В консоли:  > 123
    list.insert(3, 1111);                                        //             > 22
    list.show();                                                 //             > 15
    std::cout << "Count = " << list.get_count() << std::endl;    //             > 1111
    std::cout << std::endl;                                      //             > 175
                                                                 //             > 99
                                                                 //             > 1
                                                                 //             > Count = 7

    // удаление первого элемента списка                          // В консоли:  > 22
    list.pop_front();                                            //             > 15
    list.show();                                                 //             > 1111
    std::cout << "Count = " << list.get_count() << std::endl;    //             > 175
    std::cout << std::endl;                                      //             > 99
                                                                 //             > 1
                                                                 //             > Count = 6

    // удаление последнего элемента списка                       // В консоли:  > 22
    list.pop_back();                                             //             > 15
    list.show();                                                 //             > 1111
    std::cout << "Count = " << list.get_count() << std::endl;    //             > 175
    std::cout << std::endl;                                      //             > 99
                                                                 //             > Count = 5

    // удаление элемента на указанной позиции                    // В консоли:  > 22
    list.pop(1);                                                 //             > 1111
    list.show();                                                 //             > 175
    std::cout << "Count = " << list.get_count() << std::endl;    //             > 99
    std::cout << std::endl;                                      //             > Count = 4

    // удаление элементов в указанном диапазоне                  // В консоли:
    list.pop(1, 2);                                              //             > 22
    list.show();                                                 //             > 99
    std::cout << "Count = " << list.get_count() << std::endl;    //             > Count = 2
    std::cout << std::endl;

    // удаление всех элементов списка                            // В консоли:
    list.clear();                                                //             > List is empty.
    list.show();                                                 //             > Count = 0
    std::cout << "Count = " << list.get_count() << std::endl;
    std::cout << std::endl;

    return 0;
}
