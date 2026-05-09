#include <iostream>

int main()
{
    int a;
    int b = (a = 5, (a < 9 || ++a));
    std::cout << b << std::endl;

    return 0;
}


