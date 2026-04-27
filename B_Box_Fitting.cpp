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
        int n, w;
        cin >> n >> w;
        vector<int> v(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        multiset<int> ml;
        for (auto i = 0; i < n; i++)
        {
            auto it = ml.lower_bound(v[i]);
            if (it != ml.end())
            {
                int x = *it;
                ml.erase(it);
                ml.insert(x - v[i]);
            }
            else
            {
                ml.insert(w - v[i]);
            }
        }
        cout << ml.size() << endl;
    }

    return 0;
}