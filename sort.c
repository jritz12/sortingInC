#include <stdio.h>
#include <string.h>
void func(char strings[5][20]){
    strcpy(strings[1], strings[2]);

     for(int i = 0; i < 10; i++) {
        //printf("%c\n", strings[i][0]);
        printf("%s\n", strings[i]);
    }
}
int main(){
    char strings[10][20] = {
        "First",
        "Second",
        "Third",
        "Fourth",
        "Fifth",
        "Sixth",
        "Seventh",
        "Eighth",
        "Ninth",
        "Tenth"
    };

   func(strings);
    
 
    return 0;
}