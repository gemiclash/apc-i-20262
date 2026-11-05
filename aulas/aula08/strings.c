#include <stdio.h>
#include <string.h>

int main(){


char v[13];
v[0] = 'e';
v[1] = 'u';
v[2] = ' ';
v[3] = 'g';
v[4] = 'o';
v[5] = 's';
v[6] = 't';
v[7] = 'o';
v[8] = ' ';
v[9] = 'd';
v[10] = 'o';
v[11] = ' ';
v[12] = 'C';


for(int i=0; i<13; i++ ){ 
    
    printf("%c", v[i]);
}
printf("\n");
printf("%s\n", v);

/*
naum pode
vetor ("v") = "eu gosto de c";
veotr = eu gosto de "+"c";
*/
strcpy(v,"bora codar!");
v[12]='\0';
for(int i=0; i<13; i++ ){ 
    printf("%c", v[i]);
}
printf("%s\n", v);


strcpy(v,"bora ");
printf("%s\n", v);
//strcat conecta strings
strcat(v, "codar!");
printf("%s\n", v);
//strcmp compara strings
printf("banana = BANANA? %i\n", strcmp("banana","BANANA"));
printf("BANANA = banana? %i\n", strcmp("BANANA","banana"));
printf("banana = banana? %i\n", strcmp("banana","banana"));
//STRLEN tamanho da palavra
printf("banana tem %i caracteres\n",strlen("banana"));
//strchr procura o caractere na palava
printf("banana tem a letra 'a'? %s\n", strchr("banana", 'a'));
printf("banana tem a letra 'e'? %s\n", strchr("banana", 'e'));
//strstr procura string na string
printf("banana tem a 'ana'?%s\n",strstr("banana","ana"));
printf("banana tem a 'ama'?%s\n",strstr("banana","ama"));
//memset preencher uma string
memset(v, 'a', 5);
printf("%s\n",v);
//lipar vetor
memset(v, '\0', sizeof(v));
printf("%s\n",v);


return 0;


}