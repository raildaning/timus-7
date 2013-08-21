#include <iostream>

inline int s(int An)
{
    if (An==0) return 1;
    return (An>0?An:-An+2)*(An<1?An:1) + (An>0?An:-An+2)*((An>0?An:-An+2)-1)*1/2;
}

int main()
{
    int n;
    std::cin  >> n;
    std::cout << s(n);
    return 0;
}
//1068
//Accepted (0.015) 196 КБ
