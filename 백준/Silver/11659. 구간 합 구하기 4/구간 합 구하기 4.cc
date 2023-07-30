#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int s[100001];
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        s[i + 1] = s[i] + temp;
    }

    for(int k = 0; k < m; k++) {
        int i, j;
        cin >> i >> j;
        cout << s[j] - s[i - 1] << "\n";
    }
}