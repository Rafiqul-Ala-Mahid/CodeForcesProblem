#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int T,n,w,h,a[N],b[N];
bool check(int x){
    int j=0;
    for(int i=0;i<n;i++){
        while(j<n&&b[j]+h<=a[i]-x) j++;
        if(j==n) return 0;
        if(b[j]+h<=a[i]+x&&a[i]-x<=b[j]+h) j++;
        else return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>T;
    while(T--){
        cin>>n>>w>>h;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int l=0,r=2e9;
        while(l<r){
            int mid=(l+r)/2;
            if(check(mid)) r=mid;
            else l=mid+1;
        }
        if(l<=w) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
