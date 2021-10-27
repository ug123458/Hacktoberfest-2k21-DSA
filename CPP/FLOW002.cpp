#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
const int MAXN = 10000500;
const int MAXVALUE = 1000000500;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<(a%b)<<endl;
    }
}
