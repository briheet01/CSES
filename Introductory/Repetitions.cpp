#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin>>s;
 
  int ans = 1;
  int count = 0;
 
  char l ='A';
  for(char d:s){
    if(d==l){
      ++count;
      ans = max(count, ans);
    }
    else{
      l=d;
      count = 1;
    }
  }
  cout << ans;
}