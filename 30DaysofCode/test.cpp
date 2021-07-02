#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s = "Sam 84712848";
    int pos = s.find(" ");
    string s1 = s.substr(0, pos);
    string s2 = s.substr(pos + 1, s.length());
    cout << pos;
    cout << s1;
    cout << s2;
    return 0;
}