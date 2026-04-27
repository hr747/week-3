#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int ps = 1;
    vector<int> v;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    for (auto i = 1; i <= t; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            s.insert({ps, x});
            ml.insert({x, -ps});
            ps++;
        }

        else if (type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            v.push_back(pos);
            s.erase({pos, money});
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }
    for (auto valu : v)
    {
        cout << valu << " ";
    }
    cout << endl;

    return 0;
}