#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define fi          first
#define se          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    //cin>>testcases;
    string str;
    ll white=0,black=0;
    while(cin>>str){
        f(str.size())
        {
        	switch(str[i])
        	{
        		case 'q': {
        			black+=9;
        			break;
        		}
        		case 'r': {
        			black+=5;
        			break;
        		}
        		case 'b': {
        			black+=3;
        			break;
        		}
        		case 'n': {
        			black+=3;
        			break;
        		}
        		case 'p': {
        			black+=1;
        			break;
        		}
        		case 'Q': {
        			white+=9;
        			break;
        		}
        		case 'R': {
        			white+=5;
        			break;
        		}
        		case 'B': {
        			white+=3;
        			break;
        		}
        		case 'N': {
        			white+=3;
        			break;
        		}
        		case 'P': {
        			white+=1;
        			break;
        		}
        	}
        }
    }

    if(black<white)
    	cout<<"White";
    else if(white<black)
    	cout<<"Black";
    else
    	cout<<"Draw";

}
