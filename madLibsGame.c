//mad libs game

#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] = "" ;
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";


    printf("Enter an adjective(description) :");
    fgets(adjective1, sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1] = '\0'; //removes ne line char at the end it will clear empty lines between lines

    printf("Enter noun(animal or person) :");
    fgets(noun, sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0'; //removes ne line char at the end it will clear empty lines between lines

    printf("Enter an adjective(description) :");
    fgets(adjective2, sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1] = '\0'; //removes ne line char at the end it will clear empty lines between lines

    printf("Enter an verb(with ending -ing) :");
    fgets(verb, sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0'; //removes ne line char at the end it will clear empty lines between lines

    printf("Enter an adjective(description) :");
    fgets(adjective3, sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1] = '\0'; //removes ne line char at the end it will clear empty lines between lines

    
    printf("Adjective 1 is %s\n",adjective1);
    printf("Noun is %s\n",noun);
    printf("Adjective 2 is %s\n",adjective2);
    printf("Verb is %s\n",verb);
    printf("Adjective 3 is %s\n",adjective3);
    return 0;

}