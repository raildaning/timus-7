#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;

int main()
{
    const int MaxN=10001;
    int n,m;
    
    cin >> n >> m;

    int a[MaxN];

    for(int j=1; j<=m; ++j)
        cin >> a[j];

    cout << std::fixed;
    for(int j=1; j<=n; ++j)
    {
        double re=0;

        for(int i=1; i<=m; ++i)
            if (a[i]==j) ++re;

        cout << std::setprecision(2)
             << re/m*100
             << "%\n";
    }

    return 0;
}
//1263
//Accepted 0.187	252 КБ
