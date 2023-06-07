#include <iostream>
using namespace std;

void duplicate(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    int sum2 = n * (n + 1) / 2;

    int ans = sum - sum2;
    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    int num[100];
    for (int i = 0; i < n; i++)
    {
        // input in array
        cin >> num[i];
    }
    duplicate(num, n);
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}