#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,n,d,x,y,t;
	cin>>t;
	while(t>0){
		int cnt=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
		cin>>n>>d;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			
			if(x>0 && y>0){
				if(cnt==0){
					cnt++;
				}
			}
			else if(x<0 && y<0){
				if(cnt1==0){
					cnt1++;
				}
			}
			else if(x>0 && y<0){
				if(cnt2==0){
					cnt2++;
				}
			}
			else if(x<0 && y>0){
				if(cnt3==0){
					cnt3++;
				}
			}
			if(x==0){
				if(cnt4==0){
					cnt4++;
				}
			}
		    else if(y==0){
				if(cnt5==0){
					cnt5++;
				}
			}
	
	}
	int sum = cnt+cnt1+cnt2+cnt3+cnt4+cnt5;
	cout<<sum<<endl;
		
		t--;
	
}
 return 0;
}