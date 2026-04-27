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
        string s;
        cin>>s;
        int count=0;
        int n=s.length();
        
        for(auto i=0;i<n-1;++i)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }
        if(count<=2) cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
    

    return 0;
}