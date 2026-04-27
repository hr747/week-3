
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
 int main()
 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1),count(n+1);
    for(auto i=1;i<=n;i++)
    {
        cin>>v[i];
 
    }
    set<int>st;
    for(auto i=n;i>=1;i--)
    {
        st.insert(v[i]);
        count[i]=st.size();
    }
    while (k--)
    {
        /* code */
        int post;
        cin>>post;
        if (post >= 1 && post <= n)
        cout<<count[post]<<endl;
    
        
        
    }
    
    
 
    return 0;
}
