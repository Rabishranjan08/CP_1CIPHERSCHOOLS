#include<bits/stdc++.h>
//#define ll long long
using namespace std;
int equilibrium(int arr[], int n)  
{  
    int sum = 0;  
    int leftsum = 0;  
    for (int i = 0; i < n; ++i)  
        sum += arr[i];  
  
    for (int i = 0; i < n; ++i)  
    {  
        sum -= arr[i];
  
        if (leftsum == sum)  
            return i+1;  
  
        leftsum += arr[i];  
    }  
    return -1;  
}  
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     cout<<equilibrium(a,n)<<endl;
       
    }    
	return 0;
}
