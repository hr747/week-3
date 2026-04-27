#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for (auto i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while (q--)
        {
            /* code */
            int a, b;
            cin >> a >> b;
            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
                cout << "NO" << endl;
            else
            {
                int l = *mp[a].begin();
                int r = *mp[b].rbegin();
                if (l < r)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}