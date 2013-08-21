#include <iostream>

int main()
{
    int n,m;
    std::cin >> n >> m;
    std::cout << (!((n*m-1) % 2 == 0) ? "[:=[first]":"[second]=:]");
    return 0;
}
//1639
//Accepted (0.031) 192 КБ
