#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		long long l=1,r=n-1,sum1=a[0],sum2=0;
		while(l<r){
			sum1+=a[l];sum2+=a[r];
			l++;r--;
		}
		if(sum1<sum2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}