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
        map<int,ll>mp;
       ll int count=0;
        for(auto i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            int def=c-i;
            count+=mp[def];
            mp[def]++;


        }
        cout<<count<<endl;

    }
    

    return 0;
}