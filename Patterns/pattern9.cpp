#include <iostream>
using namespace std;
int main()
{int n,t,p;
cin>>n;
for(int i=1;i<=n;i++){
	int j;
	for( j=1;j<=n-i;j++){ 
		cout<<" ";	
	}
	t=i;
	for(;j<=n;j++){
		cout<<t--;
		}
		p=2;
		for(;j<=n+i-1;j++){
			cout<<p++;
	}cout<<endl;
}

}