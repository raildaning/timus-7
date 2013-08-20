#include <iostream>
#include <vector>

inline bool prime(const int n)
{
    if ((n<2) || ((n%2==0) && (n>2))) return false;
    for(int i=3;i<n;++i)
        if (!(n%i)) return false;
    return true;
}

inline int Nprime(const int n)
{
    int i=2;
    for(int j=0; j<n; ++i)
        if (prime(i)) ++j;
    return --i;
}

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> v;

    for(int x;N!=0;--N)
    {
        std::cin >> x;
        v.push_back(x);
    }

    for(std::vector<int>::iterator i=v.begin();i!=v.end(); )
        std::cout << Nprime(*i++) << '\n';
    return 0;
}
//1086
//Time limit exceeded (2.031) 212Kb
