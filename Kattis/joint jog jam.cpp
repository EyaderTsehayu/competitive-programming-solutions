#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	double x,y,o,z;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;

	x=sqrt(pow(abs(c-a),2)+pow(abs(d-b),2));
	y= sqrt(pow(abs(g-e),2)+pow(abs(h-f),2));
	if(x==y){
		cout<<x;
	}else
	cout<<max(x,y);
	

 return 0;
}