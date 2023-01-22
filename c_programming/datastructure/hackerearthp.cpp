#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)



typedef pair<ll, ll> pii;
typedef vector<ll> vi;
ll maxn=10001,mm=1000000007;
ll dp[10001][101];
int main()
{
    fast;
	int i;
    rep(i,0,101)
    dp[0][i]=1;
    rep(i,1,101)
    {
        rep(j,1,maxn)
        {
            rep(x,1,min(j,i)+1)
            {
                dp[j][i]+=dp[j-x][i];
                dp[j][i]%=mm;
            }
        }
    }
	cin>>t;
	while(t--)
	{
		ll n,m;
        cin>>n>>m;
        cout<<dp[n][m]<<endl;
	}
}
