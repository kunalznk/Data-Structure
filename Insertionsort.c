#include<stdio.h>
#include<stdlib.h>




int main()
{
	int a[11]; //Static Array OF Size 11
	int n =11;
	int iteration = 0; // No Of Iteration To Peform For Sorting the list
	
	
	// Taking the INPUT from the Console
	for(int i=0;i<n;i++){
		
		scanf("%d",&a[i]);
		
		}
	
	for(int i =1 ; i<n; i++){
		
		int hole = a[i];                       // As INSERTION SORT WORKS BY DIVIDING ARRAY INTO PART SORTED AND SORTED
		iteration = iteration + 1;             // HOLE IS THE CURRENT ELEMENT WHICH IS TO BE INSERT IN APPROPRIATE POSTION
	
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
