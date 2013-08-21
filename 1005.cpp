#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int n,i,m, res,sum1,sum2;
int a[21];

void
rec(int m, int sum1, int sum2)
{
    if (m == n)
    {
        if (std::abs(sum1-sum2)<res)
            res=std::abs(sum1-sum2);
        return;
    }

    rec(m+1, sum1+a[m+1], sum2);
    rec(m+1, sum1, sum2+a[m+1]);
}

int main()
{
    m=sum1=sum2=0; res=100000;
    cin >> n;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    rec(m,sum1,sum2);
    cout << res;
    return 0;
}

//1005
//Accepted 0.031	196 КБ
