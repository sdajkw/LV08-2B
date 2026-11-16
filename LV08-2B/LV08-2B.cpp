#include <iostream>
using namespace std;

void zrcalo(unsigned int n)
{
    cout << n % 10;
    if (n >= 10)
        zrcalo(n / 10);
}

int brojPozitivnih(int a[], int n, int i)
{
    if (i == n)
        return 0;
    return (a[i] > 0) + brojPozitivnih(a, n, i + 1);
}

long long nacini(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return nacini(n - 1) + nacini(n - 2);
}

int main()
{
    // Zadatak 1
    int n;
    cin >> n;
    zrcalo(n);

    // Zadatak 2
    /*
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << brojPozitivnih(a, n, 0);
    */

    // Zadatak 3
    /*
    int n;
    cin >> n;
    cout << nacini(n);
    */
}