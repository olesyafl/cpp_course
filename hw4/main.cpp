#include <classes.h>

int main()
{
    Square    figure1("First figure",  2.0);
    Rectangle figure2("Second figure", 2.5, 4.0);
    Triangle  figure3("Third figure",  3.0, 4.0, 5.0);
    Circle    figure4("Fourth figure", 5.0);
    Cube      figure5("Fifth figure",  5.0);
    Ball      figure6("Sixth figure",  6.0);

    figure1.print();
    figure2.print();
    figure3.print();
    figure4.print();
    figure5.print();
    figure6.print();
}
