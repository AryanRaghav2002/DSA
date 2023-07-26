#include<bits/stdc++.h>
using namespace std;

long max(long a[5]){
    long maxn=a[0];
    for(int i=1;i<5;i++){
      if(a[i]>maxn){
          maxn=a[i];
      }
    }
    return maxn;
}

long min(long a[5]){
    long minn=a[0];
    for(int i=1;i<5;i++){
      if(a[i]<minn){
          minn=a[i];
      }
    }
    return minn;
}


int main(){
    long arr[5],sum=0;
    long maxsum=0;
    long minsum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long a=max(arr);
    long b=min(arr);
    maxsum=sum-b;
    minsum=sum-a;
    cout<<minsum<<" "<<maxsum;
}