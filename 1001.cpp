#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using std::sqrt;
using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<double> v;

    double z;
    while (cin >> z)
        v.push_back(z);

    cout << std::fixed;

    for(vector<double>::iterator i=v.end()-1; i >= v.begin(); --i)
        cout << std::setprecision(4) << sqrt(*i) << "\n";

    return 0;
}
//1001
//Accepted (0.437) 1 696Kb
