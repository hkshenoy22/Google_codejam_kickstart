#include<bits/stdc++.h>
#include <iterator>
#include <iostream>
#include <numeric>
#include <math.h>
#define ll long long
#define ull long
#define mpa make_pair
#define pb push_back
#define ff first
#define pii pair<ll,ll>
#define dd double
#define trace(x) cerr << #x << " : " << x << endl
#define ss second
#define boost ios_base::sync_with_stdio(0)
#define forp(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,n)    for(ll i=0;i<n;++i)
#define ren(i,n)    for(ll i=n-1;i>=0;i--)
#define forn(i,a,b) for(ll i=a;i>=b;i--)
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end();
#define sc(x) scanf("%lld",&x)
#define clr(x,val) memset(x,val,sizeof(x))
#define pr(x) printf("%lld\n",x) 
#define gc getchar
#define pdd pair<dd,dd>
#define read_arr(a,n) for(ll i=1;i<=n;i++)cin>>a[i];
#define init_arr(a,n) for(ll i=1;i<=n;i++)a[i]=n-i+1;
#define prec(x) cout<<fixed<<setprecision(x)
#define fre freopen("input.txt","r",stdin),freopen("output.txt","w",stdout)
#define arr array 
using namespace std;
vector<ll> get_num(ll l){
	vector<ll> req;
	while(l){
		req.pb(l%10);
		l/=10;
	}
	reverse(all(req));
	
	return req;
}
ll no_str(ll n){
	ll res=1;
	ll a=5;
	while(n){
		if(n%2)res=(res*a);
		n/=2;
		a=a*a;
	}
	return res;
}

ll chk(vector<ll> m){
	for(ll i=0;i<m.size();i++){
		if(i%2==m[i]%2)return 0;
	}
	return 1;
}


ll verify(ll n){
	ll ans=0;
	for(ll i=1;i<=n;i++)ans+=chk(get_num(i));
	return ans;
}
ll solve(ll n){
	auto a=get_num(n);
	ll ans=0;
	
	for(ll i=1;i<a.size();i++)ans=ans+no_str(i);
	
	ll len=a.size();
	
	for(ll i=0;i<a.size();i++){
		
		ll pos=i+1;
		
		ll lim=a[i];
		
		if(pos%2){
			for(ll j=1;j<lim;j+=2) ans+=no_str(len-1);
			
		}else{
			for(ll j=0;j<lim;j+=2) ans+=no_str(len-1);
			
		}
		
		
		if(a[i]%2 != pos%2){
			
			break;
		}
		
		if(i==a.size()-1)ans++;
		len--;
	}
	
	return ans;
	
}
int main(){
	ll t;
	cin>>t;
	ll tc=1;
	
	while(t--){
		ll l,r;
		cin>>l>>r;
		cout<<"Case #"<<tc<<": "<<solve(r)-solve(l-1)<<endl;
		tc++;
	}
}


	
		
