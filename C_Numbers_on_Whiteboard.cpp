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
        cout<<2<<endl;
        int a=n;
        int b=n-1;
        cout<<a<<" "<<b<<endl;
        int valu=(a+b+1)/2;
        for(auto i=n-2;i>=1;i--)
        {
            
                
                cout<<valu<<" "<<i<<endl;
                valu=(valu+i+1)/2;
            
        }
        
    }
    

    return 0;
}


