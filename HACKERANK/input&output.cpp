#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int a, b, c, n;
    if (1 <= a <= 1000 && 1 <= b <= 1000 && 1 <= c <= 1000)
    {
        cin >> a >> b >> c;
    }
    cout << (n = a + b + c);
    return 0;
}