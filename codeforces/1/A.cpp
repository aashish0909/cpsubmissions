#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,m,a,ans,M,N;
	cin>>n>>m>>a;
	M=ceil(m/a);
	N=ceil(n/a);
	ans=M*N;
	cout<<fixed<<setprecision(0)<<ans;
}