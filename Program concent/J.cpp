#include<bits/stdc++.h>
int palin(int j);
int sym(int j);
char inp[10][100000];
int n;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",inp[i]);
	}
	for(int i=0;i<n;i++)
		if(i<n-1){
			if(palin(i)) printf("PALINDROME!!!\n");
		    else if(sym(i)) printf("SYMMETRY!!!\n");
		    else printf("UGLY!!!\n");
		}
		else if(i==n-1){
			if(palin(i)) printf("PALINDROME!!!");
		    else if(sym(i)) printf("SYMMETRY!!!");
		    else printf("UGLY!!!");
		}
	
	
}
int palin(int j){
	int count;
		for(int i=0;i<strlen(inp[j]);i++){
		if(inp[j][i]!=inp[j][strlen(inp[j])-i-1]) return 0;
    }
    return 1;
}
int sym(int j){
	char temp[10][100000];
	for(int i=0;i<strlen(inp[j]);i++){
		if(inp[j][i]=='(') temp[j][i]=')';
		else if(inp[j][i]==')') temp[j][i]='(';
	}
	for(int i=0;i<strlen(inp[j]);i++){
		if(temp[j][i]!=inp[j][strlen(inp[j])-i-1]) return 0;	
	}
	return 1; 
}
