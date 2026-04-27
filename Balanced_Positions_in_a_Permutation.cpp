#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int a = 0;
        
        for (auto i = 0; i < n; i++)
        {int b=0;

            for (auto j = 0; j < n; j++)
            {
                if (j < i && v[j] < v[i])
                {
                    b++;
                }
                else if (j > i && v[j] > v[i])
                {
                    b--;
                }
            }
            if (b == 0)
            {
                a++;
            }
        }
        cout << a << endl;
    }

    return 0;
}