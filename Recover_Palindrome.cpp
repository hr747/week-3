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
        int n; cin>>n;
        string s;
        cin >> s;
        int z = 0;
        int i = 0;
        int j = n-1;
        while (i <= j)
        {
            /* code */
            if(i==j){
            if (s[i] =='?')
            {
                z = 1;
                break;
            }
        }
            else{
                if(s[i] =='?'&& s[j] =='?')
                {
                    z=1;
                    break;
                }
            }
            i++;
            j--;
        }
        if (z == 0)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}