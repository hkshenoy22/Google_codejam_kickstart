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
ll solve(vector<ll> x,vector<ll> y){
	
	sort(all(x));
	sort(all(y));
	ll n=x.size();
	for(ll i=0;i<n;i++)x[i]=x[i]-i;
	
	ll soly=0;
	ll resy=0;
	
	for(ll i=0;i<n;i++)resy+=abs(y[i]-y[n/2]);
	soly=resy;
	
	if(n/2-1>=0){
		resy=0;
		for(ll i=0;i<n;i++)resy+=abs(y[i]-y[n/2-1]);
		soly=min(soly,resy);
	}
	
	sort(all(x));
	
	ll resx=0;
	ll solx=0;
	for(ll i=0;i<n;i++)resx+=abs(x[i]-x[n/2]);
	solx=resx;
	
	if(n/2-1>=0){
	    resx=0;
	    for(ll i=0;i<n;i++)resx+=abs(x[i]-x[n/2-1]);
	    solx=min(solx,resx);
	}
	
	return solx+soly;
}

int main(){
	
	ll t;
	cin>>t;
	ll tc=1;

	while(t--){
		ll n;
		cin>>n;
		
		vector<ll> x(n),y(n);
		for(ll i=0;i<n;i++)cin>>x[i]>>y[i];
		ll ans=solve(x,y);

		cout<<"Case #"<<tc<<": "<<ans<<endl;
		tc++;
	}
	
	
}

	
		
