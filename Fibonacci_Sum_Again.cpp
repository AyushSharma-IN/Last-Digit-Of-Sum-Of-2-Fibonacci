#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long int> Fib(long n)
{
    vector<unsigned long long int> f(n);
    long i;

    f[0] = 0; f[1] = 1;

    for (i = 2; i < n + 1; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }
    
    return f;
}

int main()
{
    unsigned long long int sum;
    long n1, n2;
    cin >> n1 >> n2;
    ++n1; ++n2;
    if (n1 < n2)
    {
        n2 %= 60;
        vector<unsigned long long int> f(n2);
        f = Fib(n2);
        for (auto i : f)
        {
            sum = (sum + i) % 10;
        }
        cout << sum << endl;
    }
    else if (n1 > n2)
    {
        n1 %= 60;
        vector<unsigned long long int> f(n1);
        f = Fib(n1);
        for (auto i : f)
        {
            sum = (sum + i) % 10;
        }
        cout << sum << endl;
    }
    return 0;
}