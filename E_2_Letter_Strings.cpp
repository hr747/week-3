#include <bits/stdc++.h>

using namespace std;

#define ll long long

 int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        long long count_full[11][11] = {0}; 
    long long count_pos1[11] = {0};
    long long count_pos2[11] = {0};
    
    long long ans = 0;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int u = s[0] - 'a';
        int v = s[1] - 'a';
        
        
        ans += (count_pos1[u] - count_full[u][v]);
        
        
        ans += (count_pos2[v] - count_full[u][v]);
        
        
        count_pos1[u]++;
        count_pos2[v]++;
        count_full[u][v]++;
    }
    
    cout << ans << endl;
}

    
    

    return 0;
}