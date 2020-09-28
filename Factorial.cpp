  
#include<iostream>
using namespace std;

long long Z(long long n){
    long long N=n,i=1,zeros=0;
    while(n/5!=0){
        zeros+=n/5;
        n=n/5;
    }
    return zeros;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);    
    cout.tie(0);
    long long T,N;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<Z(N)<<endl;
    }
    return 0;
}