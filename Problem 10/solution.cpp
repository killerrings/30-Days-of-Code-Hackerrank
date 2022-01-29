#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;

    while (n != 0)
    {
        n = n & (n << 1);
        count++;
    }

    cout << count;
    return 0;
}