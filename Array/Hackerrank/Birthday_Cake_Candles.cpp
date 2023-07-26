#include<bits/stdc++.h>
using namespace std;
int max(int a[],int n){
    int maxn=a[0];
    for(int i=1;i<n;i++){
      if(a[i]>maxn){
          maxn=a[i];
      }
    }
    return maxn;
}

int main(){
    int n;
    int count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=max(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        {count=count+1;
        }
    }

cout<<count;
}