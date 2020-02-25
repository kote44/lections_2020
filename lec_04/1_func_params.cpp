/* Аргументы в функцию передаются по значению, т.е.
 * при вызове функции для хранения фактических переданных значений
 * создаются временные переменные - ячейки памяти на сегменте STACK.
 * После выхода из функции эти переменные уничтожаются.
 *
*/
#include <iostream>

void increment(int a) // При вызове появится переменная a с копией значения b.
{
    a = a + 1;        // Значение a увеличится на 1.
}                     // Однако, при выходе из функции переменная a уничтожится.

int main() {
    int b = 3;
    increment(b);     // Здесь число 3 будет скопировано из b во временную a.
    std::cout << b;   // Естественно, вызов функции inc(b) не изменил b.
    
    return 0;
}
