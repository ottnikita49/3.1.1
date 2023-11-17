
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const int N = 7;
    int a[N] = { 1,2,3,4,5,6,7 };
    int ch = 0; cin >> ch;

    switch (ch)
    {
    case 1: {

        break;
    }
    case 2: {
        for (int t = 0; t < N; t++)
            a[t] = rand() % 15;
        break;
    }
    case 3: {
        for (int t = 0; t < N; t++)
            cin >> a[t];
    }
    }
    for (int k = 0; k < N; k++) cout << setw(15) << a[k] << endl;

    int max = a[0]; int k = 0;
    for (int i = 1; i < N; i++) {
        if (a[i] > max) { max = a[i]; k = i; }
    }
    int sum = 0;
    for (int i = 0; i <= k; i++)
        sum = sum + a[i];
    cout << "Index max = " << k << endl << "Summa do max = " << sum << endl;
}

