#include <stdio.h>
#include <stdlib.h>

float main(void) {
    float a;             
    float b;              
    float c; 
    scanf ("%f%f%f", &a, &b, &c);
        
    float elements[]= {a,b,c};
   

    float max=elements[0];
	for(int i=1;i<3;i++)
	if (elements[i]>max){
	max=elements[i];
	}
	for(int x = 0 ; x < 2; x++) { 
      for(int j = 0 ; j < 2 - x - 1 ; j++) {  
          if(elements[j] > elements[j+1]) {           
             float tmp = elements[j];
             elements[j] = elements[j+1] ;
             elements[j+1] = tmp; 
          }
       }	
   }
   int comp (const int *i, const int *j)
	{
		 float a = *(float*)i, b = *(float*)j;
    
		return a - b;
	};
   qsort(elements, 3, sizeof (int), (int(*) (const void *, const void *)) comp);

   
   if (elements[2] * elements[2] == elements[1] * elements[1]+elements[0] * elements[0]){
   		printf("%s\n", "True");
   }
   else{
   	printf("%s\n", "False");
   }
	//printf("\nmax=%d\n",max);
	//printf("%d\n", elements[0]);
	//printf("%d\n", elements[1]);
	//printf("%d\n", elements[2]);
}