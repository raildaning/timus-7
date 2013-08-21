#include <iostream>

int main()
{
    int n, m, y, i, j, x;
    bool none=false;
    
    std::cin >> n >> m >> y;
    
    for(int j=0;j<m;++j)
    {
        x=1;
        for(int i=1;i<=n;++i)
            x=x * j % m;
            
        if (x==y)
        {
            std::cout << j << ' ';
            none=true;
        }
    }
    if (!none) std::cout << -1;
    return 0;
}


//1110
//Accepted 0.031	196 КБ
