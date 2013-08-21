#include <iostream>

inline bool f(int k)
{
    for(int i=1; k>1; k-=i++);
    return (k==1);
}

int main()
{
    int n, a[65535];
    std::cin >> n;

    for(int i=0;i<n;++i)
        std::cin >> a[i];

    for(int i=0;i<n; )
        std::cout << f(a[i++]) << ' ';
    return 0;
}
//1209
//Time limit exceeded 1.046	460 КБ
