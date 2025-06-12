
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Challenge 1: Reverse a number
// Input: 12345 → Output: 54321
int power(int n)
{
    return pow(10,n);
}

int main()
{
    int num {12345};
    int n {0};
    int k{num/pow(10,n)};
    int x{num};
    vector<int> a;
    while(k)
    {
        ++n;
        k = num/pow(10,n);
    }
    n--;


    int store {0};
    for (int i = n; i >= 0; i--)
    {
        if (x == num)
        {
            x = x / power(n);
            a.push_back(x);
            store = x * power(n);
        }
        else
        {
            /* for 12345 we can wrrite it as 1 x 10^4 + 2 x 10^3) + 3
             ( (1 x 10^4 )- 12345) = 2345
             2345 % 10^ 3 = 2
            */
            x = num -store;
            x = x / power(i);
            a.push_back(x);
            store += x*power(i);
        }
    }

    for(int i =n; i>=0; i--)
    {
        cout<<a[i];
    }

    return 0;
}
