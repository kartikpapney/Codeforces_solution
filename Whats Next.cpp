#include "bits/stdc++.h"
 
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define boost() ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
 
 
int main()
{
  boost();
  float a,b,c;
  
  while(1){
      cin>>a>>b>>c;
      if(a!=0||b!=0||c!=0){
      if((b-a)==(c-b)){
          cout<<"AP "<<2*c-b<<"\n";
          
      }
      else if((b/a)==(c/b)){
          cout<<"GP "<<(c*(c/b))<<"\n";
          
      }
      else;
      }
      else
      {
          break;
      }
      
  }
  return 0;
 } 
 
