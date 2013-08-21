#include <iostream>

using std::cin;
using std::cout;

int z(int n, int a, int b)
{
    int s=0;
    for(int j=1;j<=n;++j)
        s=s+(a*b)*2;
    return s;
}

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    cout << z(n,a,b);
    return 0;
}
//1293
//Accepted 0.015	212 КБ
