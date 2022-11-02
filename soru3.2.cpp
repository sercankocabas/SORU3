#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  insertionsort(int arr[], int size)
{
	int i,q;
	int elem;
    
	for (i=1;i<size;i++){
		
		 int elem=arr[i];
		       q=i-1;
		
	while(q>=0&&arr[q]>elem){
		
        arr[q+1]=arr[q];
              q=q-1;
    }
       arr[q+1]=elem;
  }

}
int main(){
    int i,q,arr[MAX];
    int size=100;
    srand(time(NULL));
    for(i=0;i<100;i++){
    	arr[i] = rand()%10000+1; 
  }
	for(i=0;i<100;i++){
        printf("%d\t",arr[i]); 
  }
	  
	  insertionsort(arr,size);
	   
	    for(i=0;i<size;i++){
        printf("%d\t",arr[i]); 
    }
    return 0;
}