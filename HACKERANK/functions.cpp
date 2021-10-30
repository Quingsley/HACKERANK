#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int w,int x,int y,int z)
{
    int great;
       if(w > x && w > y && w > z)
        {
            great = w;
        }
    else if(x > w && x > y && x > z)
        {
            great = x;
        }
    else if(y > w && y > x && y > z)
        {
            great  = y;
        }
    else
        {
            great = z;
        }
        
    return great;
   
}
int main() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout <<  max_of_four(a,b,c,d);
    
    return 0;
}