/*Pattern 1
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i=1;
    while(i<=n){
        for (int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
 }*/

/* 
Pattern 2
 #include<iostream>
using namespace std;
 int main(){
    int n;
        cout<<"Enter the number";
        cin>>n;
        int i=1;
        while(i<=n){
            int j =1;
             while(j<=n){
                cout<<i;
                j++;
             }
             cout<<endl;
             i++;
        }
 }
 */
/*
/*
#include<iostream>
using namespace std;

int main(){

    int n;
        cout<<"Enter the number";
        cin>>n;
    int k=n;
    int i=1;
    while(i<=n){
        int j=k;
        while(j<=k && j>=1){
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
        k--;
        
    }

}

// pattern 4
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}


//pattern5
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the numbber :"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    }


//pattern 6
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int i=0;
     while(i<n){
        int j=1;
        while(j<=n){
            cout<<i*3 +j;
            j++;
        }
        i++;
        cout<<endl;
     }
}


//pattern7
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}


//pattern 8
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
     }
}


//pattern 9
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int count=1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count=count+1;
        }
       cout<<endl;
     }
}


//pattern 10
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
     }
}


//pattern 11
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int i=1;
     while(i<=n){
        int k=i;
        int j=1;
        while(j<=i){
            cout<<k;
            j++;
            k--;
        }
        i++;
        cout<<endl;
     }
}

// pattern 12
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     char ch='A';
     int i=1;
     while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
        }
        ch++;
        i++;
        cout<<endl;
     }
}

//pattern 13
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int i=1;
     char ch='A';
     while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
     }
}

//pattern 14
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     char ch='A';
     char ck=ch;
     int i=0;
     while(i<n){
        int j=1;
        ch=ck+i;
        while(j<=n){
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
     }
}

//pattern15
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     char ch='A';
     char ck=ch;
     int i=1;
     while(i<=n){
        int j=1;
        ch=ck+i-1;
        while(j<=i){
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
     }
}

//pattern 16
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     char ch='D';
     char ck=ch;
     int i=1;
     while(i<=n){
        int j=1;
        ch=ck-i+1;
        while(j<=i){
            cout<< ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
     }
}

//pattern 17
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int k=n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=k){
                cout<<"*";
            }
            else cout<<" ";
        }
        k--;
        cout<<endl;
     }
}

//pattern 18
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
     int i=1;
     while(i<=n){
        int spaces=n-i;
        //printing spaces
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        //printing numbers
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //printing right side
        int start= i-1;
        while(start>0){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
     }   
     
}
*/
     