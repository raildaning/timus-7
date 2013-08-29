#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    for(int i=0, j=0;i<s.size();++i)
        if (s[i]==s[i+1]) {
            s.erase(s.begin()+i,s.begin()+i+2);
            i=0;
        }

    std::cout << s;
    return 0;
}
