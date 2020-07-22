#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	float m=(float)t/(float)2;
	int q,r;
	q=m*10;
	if(m==1)
		cout<<"NO"<<endl;
	else if(q%10!=5)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}