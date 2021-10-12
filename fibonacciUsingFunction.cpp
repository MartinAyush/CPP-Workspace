#include <iostream>
using namespace std;
// Fibonacci series

void fibonacci(int n){
    int a = 0, b = 1, c = 3;
    cout << a << " " << b << " ";
    while (c <= n)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        c++;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}
