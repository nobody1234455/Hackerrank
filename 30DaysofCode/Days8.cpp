// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
// #include <string>
// #include <iterator>
// using namespace std;

// class phoneNumber
// {
// public:
//     string content;
//     string number;
//     string name;
// };

// int main()
// {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     //=======================================================
//     map<string, string> dict;
//     int n;
//     //cin >> n;
//     n = 3;
//     phoneNumber list[5];

//     list[0].name = "Sam";
//     list[1].name = "Harry";
//     list[2].name = "John";

//     list[0].number = "123";
//     list[1].number = "456";
//     list[2].number = "789";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> list[i].content;
//         int pos = list[i].content.find(" ");
//         list[i].name = list[i].content.substr(0, pos);
//         list[i].number = list[i].content.substr(pos + 1, list[i].content.length());
//         dict.insert(pair<string, string>(list[i].name, list[i].number));
//     }

//     map<string, string>::iterator itr;

//     for (itr = dict.begin(); itr != dict.end(); ++itr)
//     {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//     }
//     // string a;
//     // while (cin >> a)
//     // {
//     //     //Your loop body
//     //     cin >> a;
//     //     bool flag = true;
//     //     if (dict.find(a) != dict.end())
//     //         cout << "Not found" << endl;
//     //     else
//     //         cout << a + "=" << dict[a] << endl;
//     // }
//     return 0;
// }
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::string name, number, key;
    std::map<std::string, std::string> dict;

    for (int i = 0; i < n; i++)
    {
        std::cin >> name >> number;
        dict.emplace(std::pair<std::string, std::string>(name, number));
    }

    while (std::cin >> key)
    {
        if (auto res = dict.find(key); res != dict.end())
        {
            std::cout << key << "=" << res->second << std::endl;
        }
        else
        {
            std::cout << "Not found" << std::endl;
        }
    }
    return 0;
}