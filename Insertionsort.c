#include<stdio.h>
#include<stdlib.h>




int main()
{
	int a[11];
	int n =11;
	int iteration = 0;
	
	for(int i=0;i<n;i++){
		
		scanf("%d",&a[i]);
		
		}
	
	for(int i =1 ; i<n; i++){
		
		int hole = a[i];
		iteration = iteration + 1;
	
	    for(int j =i; (j>0) && a[j-1]>a[j];j--){
			
			a[j] = a[j-1];
			a[j-1] = hole;
			iteration++;
			
			}
		
		}
		
		for(int i=0;i<n;i++){
		
		printf("\t%d",a[i]);
		
		}
	
	printf("\n%d",iteration);
	
}
