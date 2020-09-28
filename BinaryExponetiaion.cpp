#include <iostream>
using namespace std;

long long binpow(long long a, long long b) {
    a=a%10;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % 10;
        a = a * a % 10;
        b >>= 1;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    long long int a,b;
    cin>>a>>b;
    cout<<binpow(a,b)<<"\n";
    }
    return 0;
}