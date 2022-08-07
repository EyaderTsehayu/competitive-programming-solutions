#include <bits/stdc++.h>
using namespace std;

int main ()
{

 int t;
 cin>>t;
  while(t--){
  	string s;
	cin>>s;
int n=s.size();
n = sqrt( n );

    char table[n][n];
  	int a=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n; j++){
    		table [i][j] = s[a];
    		a++;
		}
	}
	for(int j=n-1;j>=0;j--){
    	for(int i=0;i<n; i++){
    		cout<<table [i][j];
		}
	}
	cout<<endl;
  }
 
  return 0;
}