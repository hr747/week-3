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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<pair<int, int>> groups;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
            {
                groups.back().second++;
            }
            else
            {
                groups.push_back({a[i], 1});
            }
        }

        int total_sets = 0;
        int last_size = -1;
        int last_count = 0;

        for (auto p : groups)
        {
            int current_size = p.first;
            int current_count = p.second;

            if (current_size == last_size + 1)
            {
                if (current_count > last_count)
                {
                    total_sets += (current_count - last_count);
                }
            }

            else
            {
                total_sets += current_count;
            }

            last_size = current_size;
            last_count = current_count;
        }

        cout << total_sets << endl;
    }
    return 0;
}