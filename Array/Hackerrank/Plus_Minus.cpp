#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int pcount=0, mcount=0, zcount=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
           pcount=pcount+1;
           }
        else if(a[i]<0){
           mcount=mcount+1;
           }
        else 
        zcount=zcount+1;
        }
        cout<<fixed<<setprecision(6)<<float(pcount)/float(n)<<endl;
        cout<<fixed<<setprecision(6)<<float(mcount)/float(n)<<endl;
        cout<<fixed<<setprecision(6)<<float(zcount)/float(n);
      
}