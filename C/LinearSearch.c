#include<stdio.h>
int search(int array[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(array[i]==x)
		  return i;
	}
	  return -1;
}
int main(){
	int array[]={2,4,0,1,9,10};
	int x=2;
	int n=sizeof(array)/sizeof(array[0]);
	int sonuc=search(array,n,x);
	(sonuc==-1)?printf("Eleman bulunamadi."):printf("Elemanın indisi:%d dir\n",sonuc);
	
}
