#include<bits/stdc++.h>
using namespace std;
int digit(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int arm(int n,int d){
    int sum=0;
    while(n>0){
        int r=n%10;
        sum+=pow(r,d);
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int d=digit(n);
    if(arm(n,d)==n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
