#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> pn;
ll n, fact[16];
void powerful_number(){
	
	fact[0]=1;
	for(ll i=1;i<=15;i++){
		fact[i]=fact[i-1]*i;
	}
}
int res=INT_MAX;
int oneCount(ll n){return __builtin_popcountll(n);}
void call(int pos, ll n, int cnt){
	if(pos>15)
		return;
	// cout<<sum<<' ';
	res = min(res,oneCount(n)+cnt);
	call(pos+1, n-fact[pos], cnt+1);
	call(pos+1, n, cnt);
 
}
int main()
{
	powerful_number();
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		res=INT_MAX;
		call(1,n,0);
		cout<<res<<endl;
	}
}