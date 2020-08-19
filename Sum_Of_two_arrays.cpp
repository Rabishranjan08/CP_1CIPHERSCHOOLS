#include<bits/stdc++.h>
using namespace std;
int summ(int a[],int b[],int n,int m){
    int sum[n];
    int carry=0,s=0,i=n-1,j=m-1,k=n-1;
    while(j>=0){
        s=a[i]+b[j]+carry;
        sum[k]=(s%10);
        carry=s/10;
        k--;
        i--;
        j--;
    }
    while(i>=0){
        s=a[i]+carry;
        sum[k]=(s%10);
        carry=s/10;
        i--;
        k--;
    }
    int temp=0;
    if(carry)
        temp=10;
    for(int i=0;i<n;i++){
        temp+=sum[i];
        temp*=10;
    }
    return temp/10;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    if(n>=m){
        cout<<summ(a,b,n,m)<<endl;
    }
    else{
        cout<<summ(b,a,m,n)<<endl;
    }
    }
    return 0;
}
