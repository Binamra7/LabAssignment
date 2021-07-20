#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, temp1 = 0, temp2 = -1, n, max = -99999, ans[1005];
    vector<long long> a, b;
    cin >> t;
    for (int cases = 1; cases <= t; cases++)
    {
        cin >> n;
        if (n == 1)
        {
            ans[cases] = 1;
        }
        else
        {
            ans[cases] = 0;
            for (int i = 0; i < n; i++)
            {
                cin >> temp1;
                a.push_back(temp1);
            }
            b = a;
            sort(b.begin(), b.end());
            if (a[n - 1] > b[n - 1])
            {
                ans[cases]++;
            }
            if (a[0] > a[1])
            {
                ans[cases]++;
            }

            for (int i = 1; i < n; i++)
            {
                if (a[i] > a[i - 1] && a[i] > a[i + 1] && a[i] > max)
                {
                    ans[cases]++;
                    max = a[i];
                }
            }
        }

        a.clear();
        max = -99999;
        temp2 = -999;
    }

    for (int i = 1; i <= t; i++)
    {
        printf("Case #%d: %d", i, ans[i]);
        cout << endl;
    }
}