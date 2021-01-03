
/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   vpi           vector<pair<int,int>>
#define   vpll          vector<pair<ll,ll>>
#define   pb            push_back
#define   eb            emplace_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
#define   MOD           1000000007
using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}


void solve(){
        int n,m,cnt1=0,cnt2=0,mov=0;
        cin>>n>>m;
        vi jhon,jack;
        for(int i=0;i<n;i++){
                int a;
                cin>>a;
                cnt1+=a;
                jhon.pb(a);
        }
        for(int i=0;i<m;i++){
                int a;
                cin>>a;
                cnt2+=a;
                jack.pb(a);
        }

        sort(all(jhon));
        sort(all(jack),greater<int>());

        int i=0,j=0;
        while(cnt1<=cnt2){
             cnt1-=jhon[i];
             cnt1+=jack[j];
             cnt2-=jack[j];
             cnt2+=jhon[i];
             mov++;
             i++,j++;
             if(i==n || j==m){break;}
        }
        if(cnt1>cnt2)cout<<mov<<endl;
        else cout<<-1<<endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}



