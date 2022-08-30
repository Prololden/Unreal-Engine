
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <chrono>

int main()
{
	std::cout << "Hello Artyom!\n";

    //1 и 2 часть задания.

    const int n = 4;
    int array[n][n]{};

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {array[i][j] = i + j;}
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {std::cout << array[i][j];}
        std::cout << "\n";
    }

    //3 часть задания.

    int day = 4, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == day % n)
        {
            for (int j = 0; j < n; j++)
            {sum += array[i][j];}
        }
        std::cout << "Today:" << day << "th\n";
        std::cout << "Sum:\t" << sum << "\n";
    }
    return 0;
}
