#include <stdio.h>

char *strncat(char *original, char *append, size_t n)
{
	
    char *ret = original;
    while (*original)
        original++;
    	
    while (n--){
        if (!(*original++ = *append++)){
            return ret;	}
    }

    return ret;
}
int main (void) {
	
	char original[10]="Game Of";
    char append[]=" Throns";
    strncat(original, append, 15);
    printf("%s\n", original);

}