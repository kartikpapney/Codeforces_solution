#include<iostream>
using namespace std;
int Reverse(int a){
    int b=0;
    while(a!=0){
        b*=10;
        b+=a%10;
        a/=10;
    }

    return b;
}
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);    
    cout.tie(0);
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        cout<<Reverse(Reverse(a)+Reverse(b))<<"\n";
    }
    return 0;
}