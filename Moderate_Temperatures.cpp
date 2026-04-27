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
        vector<int>v(n);
        for(auto i=0;i<n;i++)
        {
            cin>>v[i];

        }
        int count=0;
        auto boro=max_element(v.begin(),v.end());
        auto coto=min_element(v.begin(),v.end());
        for(auto x:v)
        {
            if(*boro!=x&&*coto!=x)
            {
                count++;
            }

        }
        cout<<count<<endl;

    }
    

    return 0;
}