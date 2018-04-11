#include <stdio.h>
#include <string.h>


int main(void) {
    int nums[10][11];

	for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 11; ++j) {
        	if(i==0 && j==0){
        		printf("%s", "    ");
        	}
        	if (i==0 || j==0){
            nums[i][j] = i+j;
		}
		
		if(i>0 && j>0){

			
			nums[i][j] =(i*10+j-1)*(i*10+j-1);
		}
       
   }
   } 
   for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 11; ++j) {
        	if (i !=0 || j != 10 ){
            printf("%4d ", nums[i][j]);
        }
        }
        printf("\n");
    }

    return 0;
}