#include<bits/stdc++.h>
using namespace std;
long long a,n,m;
long long mod2(long long k,long long n)
{
	long long ans=1,mod=1e9+7;
	 while(n>0){
    	if(n%2==1) ans=ans*k%mod;
    	k=k*k%mod;
    	n/=2;
        }
    return ans;
}
int main(){
    cin>>n>>m;
   n=mod2(2,n);
   cout<<m%n;
    }
