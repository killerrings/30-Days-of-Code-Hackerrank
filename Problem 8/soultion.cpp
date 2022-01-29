#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int tests;
    cin >> tests;

    string name, number, key;
    map<string, string> phonebook;
    for (int i = 0; i < tests; i++)
    {
        cin >> name >> number;
        phonebook[name] = number;
    }

    while (cin >> key)
    {
        if (phonebook.find(key) != phonebook.end())
        {
            cout << key << "=" << phonebook.find(key)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}