#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char* concat(const char *s1, const char *s2) {
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(int argc, char **argx) {

int *x = (int *) malloc (sizeof(int));
int *y = (int *) malloc (sizeof(int));
char **z = (char *) malloc (64);

if (argc == 1) {
printf("[pkgs] by Tarık Çelik\n");
printf("* -i for installing\n");
printf("* -r for removing\n");
}

if (argc == 2) {
printf("write the package name! \n");
}

if (argc == 3) {
*x = strcmp(argx[1], "-i");
*y = strcmp(argx[1], "-r");
if (*x == 0) {
z = concat("./", argx[2]);
z = concat(z, "-in");
z = concat(z, ".sh");
system(z);
}
if (*y == 0) {
z = concat("rm ", argx[2]);
system(z);
}
}
free(x);
free(y);
free(z);
return 0;

}
