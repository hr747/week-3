#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> v;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int count = 0, problrm = 1;
    while (!v.empty())
    
    
    {
        /* code */

        auto lb = v.lower_bound(problrm);
        
            if (lb!= v.end())
            {
                count++;
                v.erase(lb);
            }
        
        else
        {
            break;
        }
        problrm++;
    }
    cout << count;

    return 0;
}