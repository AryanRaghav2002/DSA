#include<iostream>
using namespace std;
int main()
{int n,t;
cin>>n;
for(int i=1;i<=n;i++){
	t=1;
	for(int j=1;j<=n-i;j++){
		cout<<" ";
	}for(int j=1;j<=i;j++){
		cout<<t<<" ";
		t++;
	}cout<<endl;
}

}