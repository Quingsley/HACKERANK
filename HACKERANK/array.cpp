#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int arr[MAX];
    int j;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (j = 0; j < n; j++)
    {

        cout << arr[n-j] << " ";
    }
    return 0; 
     
    
}

