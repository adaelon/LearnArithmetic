#include<bits/stdc++.h>
int cal[1000000],temp[5000000],lost[5000000],inti[1000000],n,m,c,count;
int main(){
	scanf("%d%d%d",&n,&m,&c);
	for(int i=1;i<=m;i++){
		scanf("%d",&temp[i]);
	}
	for(int i=1;i<=m;i++){
		lost[temp[i]]=temp[i];
	}
	for(int i=1;i<=c;i++){
		scanf("%d",&inti[i]);
	}
	for(int i=1;i<=n;i++){
		count=0;
	  for(int j=i;j<=n;j+=i){
	  	count++;
	  	if(j==lost[j]) count--;
	  	cal[i]=count;
	  }
	}
	for(int i=1;i<=c;i++){
	  	if(inti[i]!=0&&i==c) printf("%d",cal[inti[i]]);
	  	else if(inti[i]!=0) printf("%d\n",cal[inti[i]]);
	  }
}
