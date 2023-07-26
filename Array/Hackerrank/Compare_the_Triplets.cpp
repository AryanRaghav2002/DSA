#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    int acount=0;
    int bcount=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            acount=acount+1;
        }
        else if (b[i]>a[i]){
            bcount=bcount+1;
        }
    }
    cout<<acount<<" "<<bcount;
}