#include <bits/stdc++.h>
#define int long long
#define fi first
#define pno cout<<"NO\n"
#define ll long long
#define pys cout<<"YES\n"
#define se second
#define pb push_back
#define eb emplace_back //faster than push_back
#define mod1 1000000007
#define mod2 998244353
#define f(x,a,b) for(int x=a;x<b;x++)
#define vecpii vector<pair<int,int>>
#define INF 9223372036854775807
#define dist(x, y) sqrt(abs(x) +abs(y))
#define debug(z) cout<<z<<endl
using namespace std;

vector<string> arr(1000);
int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}
int checkcol(int x,int y,int n)
{
    bool u = 1;
    int cnt=0;
    f(i,0,6)
    {
        if(inrange(x,y-i,n,n))
        {
            if(arr[x][y-i]=='.')
                cnt++;
        }
        else
            {u=0;break;}
    }
    if(cnt<=2&&u==1)
    {
        return 1;
    }
    else
    {
        u=1;
        cnt=0;
        f(i,0,6)
        {
            if(inrange(x,y+i,n,n))
            {
                if(arr[x][y+i]=='.')
                    cnt++;
            }
            else
                {u=0;break;}
        }
        if(cnt<=2&&u==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int checkrow(int x,int y,int n)
{
    bool u = 1;
    int cnt=0;
    f(i,0,6)
    {
        if(inrange(x-i,y,n,n))
        {
            if(arr[x-i][y]=='.')
                cnt++;
        }
        else
            {u=0;break;}
    }
    if(cnt<=2&&u==1)
    {
        return 1;
    }
    else
    {
        u=1;
        cnt=0;
        f(i,0,6)
        {
            if(inrange(x+i,y,n,n))
            {
                if(arr[x+i][y]=='.')
                    cnt++;
            }
            else
                {u=0;break;}
        }
        if(cnt<=2&&u==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int checkdiag(int x, int y,int n)
{
    bool u = 1;
    int cnt=0;
    f(i,0,6)
    {
        if(inrange(x-i,y-i,n,n))
        {
            if(arr[x-i][y-i]=='.')
                cnt++;
        }
        else
            {u=0;break;}
    }
    if(cnt<=2&&u==1)
    {
        return 1;
    }
    else
    {
        u=1;
        cnt=0;
        f(i,0,6)
        {
            if(inrange(x-i,y+i,n,n))
            {
                if(arr[x-i][y+i]=='.')
                    cnt++;
            }
            else
                {u=0;break;}
        }
        if(cnt<=2&&u==1)
        {
            return 1;
        }
        else
        {
            u=1;
            cnt=0;
            f(i,0,6)
            {
                if(inrange(x+i,y-i,n,n))
                {
                    if(arr[x+i][y-i]=='.')
                        cnt++;
                }
                else
                    {u=0;break;}
            }
            if(cnt<=2&&u==1)
            {
                return 1;
            }
            else
            {
                u=1;
                cnt=0;
                f(i,0,6)
                {
                    if(inrange(x+i,y+i,n,n))
                    {
                        if(arr[x+i][y+i]=='.')
                            cnt++;
                    }
                    else
                        {u=0;break;}
                }
                if(cnt<=2&&u==1)
                {
                    return 1;
                }
                else
                    return 0;
            }
        }
    }
}
void solve()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n];
    int k=0;
    int s;
    cin>>s;
    cout<<s/(n*n)<<endl;
}
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}