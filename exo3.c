#include <stdio.h>
#include <string.h>

int main(){
    char perdu1[]="\n\n\n\n\n\n\n-------\n";
    char perdu2[]="\n |\n |\n |\n |\n |\n |\n-------\n";
    char perdu3[]=" -------\n | |\n |\n |\n |\n |\n-------\n";
    char perdu4[]=" -------\n | |\n | O\n |\n |\n |\n-------\n";
    char perdu5[]=" -------\n | |\n | O\n | |\n |\n |\n-------\n";
    char perdu6[]=" -------\n | |\n | O\n | /|\\\n |\n |\n-------\n";
    char perdu7[]=" -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n";
    char mot[30];
    char l[1];
    int i=0;

    int letre_dans_mot=0;
    int len=strlen(mot);


    while (letre_dans_mot==0 ){
        printf("choisi une lettre : ");
        scanf("%c",l);
        for (int i=0;i>len;i++){
            if (mot[i]!=l){
                printf("non");
            }
            if(mot[i]==l){
                printf("oui");
                letre_dans_mot=1;

            }
        }

    }



    return 0;
}