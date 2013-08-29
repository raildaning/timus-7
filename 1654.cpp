#include <iostream>
#include <string>

using std::string;

inline void stierlitz(string &s)
{
    for(int i=0;i<s.size();++i)
        if (s[i]==s[i+1])
            s.erase(s.begin()+i,s.begin()+i+2);

    for(int i=0,j=s.size()-1;i<j;++i,--j)
        if (s[i]==s[i+1] || s[j]==s[j-1]) stierlitz(s);
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
//Time limit exceeded	1.046	560 КБ
