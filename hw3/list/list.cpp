#include "list.h"

/* получение количества элементов списка */
int List::get_count()
{
    return count;
}


bool List::is_empty()
{
    if (first == nullptr)
    {
        std::cout << "List is empty." << std::endl;
        return true;
    }
    else
        return false;
}


/* добавление элементов в начало списка */
void List::push_front(int value)
{
    Link *new_link = new Link;

    new_link->data = value;
    new_link->next = first;
    first = new_link;
    count++;
}


/* добавление элементов в конец списка */
void List::push_back(int value)
{
    Link *new_link = new Link;

    new_link->data = value;
    new_link->next = nullptr;

    if (first == nullptr)
        first = new_link;
    else
    {
        Link *temp = first;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_link;
    }
    count++;
}


/* вставка элемента на указанную позицию */
void List::insert(int index, int value)
{
    if (is_empty())
        return;

    if (index < 0 || index > count)
        std::cout << "Invalid index.\n" << std::endl;
    else if (index == 0)
        push_front(value);
         else
         {
             Link *p = first;
             Link *temp = new Link;
             temp->data = value;
             for (int i = 0; i < index - 1; ++i)
                 p = p->next;
             temp->next = p->next;
             p->next    = temp;
             count++;
         }
}


/* удаление первого элемента списка */
void List::pop_front()
{
    Link *temp = first;

    if (!is_empty())
    {
        first = temp->next;
        delete temp;
        count--;
    }
}


/* удаление последнего элемента списка */
void List::pop_back()
{
    if (is_empty())
        return;
    else if (first->next == nullptr)
    {
        this->pop_front();
    }
         else
         {
             Link *ptr  = first;
             Link *temp = ptr->next;
             while (temp->next != nullptr)
             {
             temp = temp->next;
             ptr  = ptr->next;
             }
             ptr->next = nullptr;
             delete temp;
             count--;
         }
}


/* удаление элемента на указанной позиции */
void List::pop(int index)
{
    if (index == 0)
    {
        this->pop_front();
    }
    else
    {
        Link *p    = first;
        Link *temp = p->next;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            p = p->next;
            if (!p->next)
            {
                std::cout << "The element does not exist in this position.\n" << std::endl;
                return;
            }
        }
        p->next = temp->next;
        delete temp;
        count--;
    }
}


/* перегрузка функции для удаления элементов в указанном диапазоне */
void List::pop(int first_index, int last_index)
{
    if (is_empty())
        return;

    if (last_index > count - 1)
        last_index = count - 1;

    if (count - 1 < first_index)
        std::cout << "Invalid range.\n" << std::endl;
    else if (first_index == last_index)
        pop(first_index);
        else
            for (int i = 0; i <= last_index - first_index; i++)
                pop(first_index);
}


/* удаление всех элементов */
void List::clear()
{
    if (is_empty())
        return;

    Link *ptr = first;
    Link *temp;
    while (ptr)
    {
        temp = ptr;
        ptr  = ptr->next;
        delete temp;
    }
    first = nullptr;
    count = 0;
}


/* вывод элементов списка на экран */
void List::show()
{
    Link* temp = first;

    if (is_empty())
        return;

    while (temp)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}
