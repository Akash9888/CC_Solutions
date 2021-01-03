
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

vector<char>v,vv;

void operation(string s2){
        int s,e;
       if(s2[0]=='1'){s=9,e=16;}
       else {s=1;e=8;}

       for(int i=1;i<s2.size();i++){
          if(s2[i]=='0')e=(s+e)/2;
          else s=(s+e)/2+1;
       }

       vv.pb(v[s-1]);
}


void solve(){
        int n;cin>>n;
        string s,s2;
        cin>>s;
        for(int i=0;i<s.size();i+=4){
              s2=s.substr(i,4);
              operation(s2);
        }
        for(int i=0;i<vv.size();i++)cout<<vv[i];
        cout<<endl;
        vv.clear();


}

int main(){
    ios_base::sync_with_stdio(0);
    //v.pb('z');
    for(int i=97;i<=112;i++){
        v.pb(char(i));
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}



