//此处仅为示例算法，请将其运用到相应的情境中去。 
for(i=0;i<n-1;i++){
	k=i;
	for(j=i+1;j<n;j++){
		if(a[j]<a[k]) k=j;
	}
	if(k!=i){
		c=a[k];
		a[k]=a[i];
		a[i]=c;
	}
} 
