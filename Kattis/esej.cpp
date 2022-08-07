#include <bits/stdc++.h>
using namespace std;

 void generate();
int main()
{
int a,b;
cin>>a>>b;
for(int i=1;i<=b;i++){
	generate();
	cout<<" ";
}

return 0;
}
void generate(){
	
	char x[] ={'a','b','c','d','g','h','i','j','k','l','m','n','q','r','s','f','t','e','x','y','u','o','p','z','x'};

    int z = rand();
    int y= z%12;
   if(y==0) y=5;
    for(int i=1;i<=y;i++){
int k= rand()%24;
cout<< x[k];
}
}

    