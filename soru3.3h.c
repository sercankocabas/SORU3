#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void quickSort(int arr[],int a,int b)
{
	int i,w,pivot,temporary;
	i=a;
	w=b;
	pivot=arr[(i+w)/2];
	
	  do {
			
	while(arr[i]< pivot)
	i++;
	
	while(arr[w]>pivot)
	w--;
	
	     if(i<=w){
		
	    temporary= arr[i];
	    arr[i]=arr[w];
	    arr[w]=temporary;
	    i++;
	    w--;
  }
}
   while(i<w);
	     if (i<b)
	     
	quickSort(arr,i,b);
	
	if(a<w)
	
	quickSort(arr,a,w);
}
int main(){
    printf("\n\nRastgele sayilar:\n\n");
    int w,arr[MAX];
    int size=100,i=0;
    
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		
		arr[i] = rand()%10000+1; 
	}
	
    for(int i=0; i<100; i++){
    	
        printf("%d\t",arr[i]); 
    }
    
    printf("\n\nsiralanan sayilar:\n\n");
    
     quickSort(arr, 0, MAX-1); 
     
	for(i=0;i<size;i++){
		
        printf("%d\t",arr[i]);}
        return 0;
    }