#include <iostream>
#include <string>

using std::string;

inline void stierlitz(string &s)
{
    for(int i=0, j=0;i<s.size();++i)
        if (s[i]==s[i+1]) {
            s.erase(s.begin()+i,s.begin()+i+2);
            i=j++;
        }

}

int main()
{
    string s;
    std::cin >> s;
    stierlitz(s);
    std::cout << s << '\n';
    return 0;
}
//1654
//Time limit exceeded	1.046	152 КБ
