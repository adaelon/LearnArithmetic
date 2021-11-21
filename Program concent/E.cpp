#include<bits/stdc++.h>
int main(){
	int n;
	long long k;
    long long a[30];
    int count;
    count=0;
    scanf("%d%lld",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<(1<<n);i++){
		long long cost =0;
		for(int j=0;j<n;j++){
			if(((i>>j)&1)==1){
				cost+=a[j];
			}
		}
		if(cost==k) count++;
		
	}
	printf("%d",count);
	return 0;

}
