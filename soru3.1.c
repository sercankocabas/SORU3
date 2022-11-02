#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void bubblesort(int arr[], int size)
{
 int i,s;
 int temporary;    
    for(i=0;i<(size-1);i++){
		
	  for(s=0;s<size-i-1;s++){
        	
        if(arr[s]>arr[s+1]){ 
            
               temporary = arr[s]; 
               arr[s] = arr[s+1];
               arr[s+1] = temporary;
             }
         }
     }
 }
int main(){

    int i,s,arr[MAX];
    int size=100;
    srand(time(NULL));

    for(i=0;i<100;i++){
    arr[i] = rand()%10000+1;
    }

	for(i=0;i<100;i++)
	{
        printf("%8d\n",arr[i]);        
    }
	
    printf("\n\tSayilarin Siralanmis halleri:\n"); 
    
    bubblesort(arr,size); 
	for(i=0;i<size;i++)
	{
        printf("%8d\n",arr[i]); 
	}
        return 0;
}
