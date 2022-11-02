#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void  selectionsort(int arr[], int size)
{
	int i,p;
	int mindex;
    
	for (i=0;i<size;i++){
		mindex=i;
        for (p=i;p<size;p++){
            if (arr[p]<arr[mindex]){
               mindex=p;
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
}

int main(){

    int i,p,arr[MAX];
    int size=100;
    srand(time(NULL));

    for(int i=0; i<100; i++){
        arr[i] = rand()%10000+1; 
    }

    printf("\nRastgele Sayilar\n");
    
	for(int i=0; i<100; i++){
        printf("%d\t",arr[i]); 
        
    } printf("\nSiralanmis Halleri\n");
    
    selectionsort(arr,size); 
	for(i=0;i<size;i++){
        printf("%d\t",arr[i]); 
}
return 0;
}