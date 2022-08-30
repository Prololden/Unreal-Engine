
#include <iostream>

int chet(int b = 20)
{
	for (int a = 0; a < b; ++a)
	{
		std::cout << a++ << "Chetnoe\n";
	}
	{return (b); }
}

int nechet(int b = 20)
{
	for (int a = 0; a < b; ++a)
	{
		std::cout << ++a << "NeChetnoe\n";
	}
	{return (b); }
}

int main()
{
	{std::cout << "Hello Artyom!\n"; }

    int nc = nechet(20);
    int c = chet(20);
}
