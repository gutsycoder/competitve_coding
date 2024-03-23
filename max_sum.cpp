#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9+7;

void solve(){
    int n,k;
    cin>> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,sum=0;
    int cur=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        cur+=a[i];
        cur=max(0LL,cur);
        s=max(cur,s);
    }
    sum=(sum%P+P)%P;
    s=s%P;
    int t=1;
    for(int i=0;i<k;i++){
        t=t*2%P;
    }
    int ans = (sum+s*t-s+P)%P;
    cout<<ans<<'\n';

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}