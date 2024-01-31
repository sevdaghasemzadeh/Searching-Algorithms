#include<stdio.h>
int binarySearch(int array[],int x,int low,int high){
	if(high>=low){
	  int mid=low+(high-low)/2;	
	  if(array[mid]==x)
		  return mid;	
       if(array[mid]>x)
		  return binarySearch(array,x,low,mid-1);
     
	  return binarySearch(array,x,mid+1,high);
	}
	return -1;
}
	
	
int main(){
	int array[]={3,4,5,6,7,8,9};
	int n=sizeof(array)/sizeof(array[0]);
	int x=7;
	int sonuc=binarySearch(array,x,0,n-1);
	if(sonuc==-1)
		printf("Bulunamadi\n");
	else
	    printf("Elemanin bulundugu indis:%d dir\n",sonuc);

	return 0;
	
}
