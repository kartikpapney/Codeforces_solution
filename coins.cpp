#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool isprime(int n){
    bool ok=1;
     for (int i = 2; i <= sqrt(n); i++) { 
  
        // If n is divisible by any number between 
        // 2 and n/2, it is not prime 
        if (n % i == 0) { 
            ok = 0; 
            break; 
        } 
    }
    return ok;
}


int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);    
    cout.tie(0);
    long long int t,i,n;
    cin>>t;
    while(t--){
        cin>>i>>n;
    for(i;i<=n;i++){
        if(isprime(i)){
            cout<<i<<"\n";
        }
    } 
    cout<<"\n";   
	}
	return 0;
}
