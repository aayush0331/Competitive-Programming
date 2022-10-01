/*
A string is perfectly balanced if its length is even, and the first half of the string can be shuffled to make the string a palindrome. For example, "abab" and "dood" are perfectly balanced, but "racecar" and "doodad" are not.
A string is almost perfectly balanced if you can delete exactly one character from it to make it perfectly balanced. Some examples are  "classical", "intelligent", and "www".

You are given a larger template string S, and Q substrings, the ith of which is S_{L_i..R_i} 
 For how many of these Q queries is the substring almost perfectly balanced?
*/

#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;                                                                                                                                          
typedef long long int ll;                             //g++ ll.cpp -o ll.exe  
typedef long double ld;  
typedef pair<ll,ll> iii;                              //all elements to 0   .\ll.exe
const ll mod =1e9+7;
#define endl "\n"

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    ll t;
    cin>>t;
    ll ans=0;
    for(ll tt=1;tt<=t;tt++)
    {
        cout<<"Case #"<<tt<<": ";
        string s;
        cin>>s;
        ll q;
        cin>>q;
        ll n;
        n=s.size()+1;
        map<char,ll> mp[n];
        //mp[0][s[0]]++;
        for(ll i=1;i<n;i++)
        {
            mp[i]=mp[i-1];
            mp[i][s[i-1]]++;
        }

        // for(ll i=0;i<n;i++)
        // {
        //     cout<<i<<"i ";
        // for(auto v:mp[i])
        // {
        //   cout<<v.first<<" "<<v.second<<" "<<endl;
        // }
        // cout<<endl;
        // }

         ans=0;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll leng;
            leng=r-l+1;
            if(leng%2==0)
            continue;

         
            ll mid;
            mid=(l+r)/2;

            // map<char,ll> mp1,mp2;
            // mp1=mp[r];
            // for(auto v:mp[mid])
            // mp[r]

            string s1="abcdefghijklmnopqrstuvwxyz";
            ll del=0;
            char delchar;
            for(ll i=0;i<s1.size();i++)
            {
                if(del>=2)
                break;

                char ch;
                ch=s1[i];
                ll cnt1,cnt2;
                cnt2=mp[r][ch]-mp[mid][ch];
                cnt1=mp[mid-1][ch]-mp[l-1][ch];

                if(s[mid-1]!=ch)
                {
                    if(cnt2!=cnt1)
                    del++;
                }
                else
                {
                    if(abs(cnt2-cnt1)==1)
                    continue;
                    else
                    del++;
                }

                


            }
            if(del==1)
                ans++;

            



        }
        

      cout<<ans<<endl;  
    }
    

}
