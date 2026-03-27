#include <stdio.h>
#include <ctype.h>
int main(){
    char pass;
    char *p = &pass;
    printf("Give pass: ");
    scanf("%c", &pass);
    int found_zifra = 0;
    int found_bukva = 0;

    while (*p != '\0') {
        if (isdigit(*p) || isalpha(*p)){
            found_zifra = 1;
            found_bukva = 1;
        }
        p++;

    }

    if(found_zifra == 1 && found_bukva == 1){
        printf("CORRECT");
    } else{
        printf("Uncorrect");
    }
    return 0;

}