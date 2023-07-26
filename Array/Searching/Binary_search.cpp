#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key){
int s=0,e=n-1;
while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        cout<<"The Number is at position : ";
        return mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else {
        s=mid+1;
    }
}

return -1;
}

int main()
{int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the number to be searched"<<endl;
cin>>key;
cout<<Binarysearch(arr,n,key);

 
}
 