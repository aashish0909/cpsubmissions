#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		bool ans[n+1];
		memset(ans,false,sizeof(ans));
		int a[2*n],b[n];
		int j=0;
		for(i=0;i<2*n;i++){
			cin>>a[i];
			if(ans[a[i]]==false)
			{
				b[j]=a[i];
				j++;
				ans[a[i]]=true;
			}
		}
		for(i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
}