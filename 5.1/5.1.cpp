#include <iostream>
#include <clocale>
/*Дан массив A размера N (N — нечетное число).
Вывести его элементы с нечетными номерами в порядке убывания номеров:
AN , AN −2, AN −4, . . ., A1.*/

int main()
{
    const size_t N = 9;
    int a[N];
    for (int i = 0; i < N; ++i) { // заполняем массив
        std::cin >> a[i];
    }
    for (int i = N - 1; i >= 0; i -= 2) // индекс начинается с нуля
        std::cout << a[i] << " ";
    return 0;
}
