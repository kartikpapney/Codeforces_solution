#include "bits/stdc++.h"
 
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define boost() ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
 
 
int main()
{
  boost();
  int t;
  cin>>t;
  while(t--){
  int n,sum=0;
  cin>>n;
  int m[n],w[n];
  for(int i=0;i<n;i++){
    cin>>m[i];
  }
  for(int i=0;i<n;i++){
    cin>>w[i];
  }
  sort(m, m+n, greater<int>());
  sort(w, w+n, greater<int>());
  for(int i=0;i<n;i++){
    sum+=(m[i]*w[i]);
  }
  cout<<sum<<"\n";
  }
    return 0;
 }
 
