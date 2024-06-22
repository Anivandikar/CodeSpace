#include  <iostream>

int main()
{
    int x = 1;
    int y = 2;
    int z = x;
    x = y;
    y = z;
    std::cout << x << "\n" << y << "\n";
    return 0;
}