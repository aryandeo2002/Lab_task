#include <stdio.h>

int main() {
    char fname[20], sname[10];
    int i = 0, j = 0;

    printf("Enter firstname: ");
    scanf("%s",&fname);

    printf("Enter surname: ");
    scanf("%s",&sname);

    while (fname[i] != '\0') {
        i++;
    }


    while (sname[j] != '\0') {
        fname[i] = sname[j];
        i++;
        j++;
    }
    fname[i] = '\0';
    printf("%s\n",fname);

    return 0;
}

