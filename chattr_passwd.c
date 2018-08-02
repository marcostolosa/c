#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[0]){
    char buffer[20];
    char argumentos[40];
    char comando[80];

if(argc < 3) {
    execl("/usr/bin/chattr","chattr",0);
    exit(0);
}
if(argc == 3) {
    snprintf(argumentos,39,"%s %s",argv[1],argv[2]);
}
if(argc == 4) {
    snprintf(argumentos,39,"%s %s %s",argv[1],argv[2],argv[3]);
}
printf("Este comando eh bloqueado por senha.\n");
printf("Salvando log... Digite a senha correta: ");
scanf("%19s",&buffer);

if(!strcmp(buffer,"senha")) {
    printf("senha ok!\n");
    sprintf(comando,"/usr/bin/chattr %s",argumentos);
    system(comando);
}
else {
    printf("Senha Invalida!\n");
}
return 0;
}

scanf("%19s",&buffer);
if(!strcmp(buffer,"senha")) {
    printf("senha ok!\n");
    sprintf(comando,"/usr/bin/chattr %s",argumentos);
    system(comando);
}
else {
    printf("Senha Invalida!\n");
}
return 0;
}
