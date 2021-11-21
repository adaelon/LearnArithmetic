#include<stdio.h>
int main(){
	int n,a,b,tp,ai;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=0;i<n;i++){
		scanf("%d%d",&tp,&ai);
		if(tp==1){
			if(ai>a) a=ai;
		}else if(tp==2){
			if(ai<b) b=ai;
		}
	}
	if(a>b) printf("NO");
	else printf("YES");
}
