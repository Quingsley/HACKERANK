#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout;
    cin >> a >> b;
    string c[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        cout << ((i <= 9) ? c[i] : ((i % 2 == 0) ? "even" : "odd")) << endl;
    }

    return 0;
}