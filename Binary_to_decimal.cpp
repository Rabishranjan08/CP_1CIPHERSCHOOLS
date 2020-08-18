#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
        ll n;
        cin>>n;
        int i=0,sum=0;
        while(n>0){
            sum+=(n%10)*pow(2,i);
            i++;
            n=n/10;
        }
        cout<<sum<<endl;
    }    
	return 0;
}
