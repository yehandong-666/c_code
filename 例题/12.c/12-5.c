#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5
struct sysuser
{
    char username[20];
    char password[8];
};
void encrypt(char *pwd);
int main(void)
{
    FILE *fp;
    int i;
    struct sysuser u[SIZE], su[SIZE], *pu = u, *psu = su;
    if ((fp = fopen("12-5.dat", "wb+")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    for (i = 0; i < SIZE; i++, pu++)
    {
        printf("Enter %d th sysuser(name password):", i);
        scanf("%s%s", pu->username, pu->password);
        encrypt(pu->password);
    }
    pu = u;
    fwrite(pu, sizeof(struct sysuser), SIZE, fp);
    rewind(fp);
    fread(psu, sizeof(struct sysuser), SIZE, fp);
    for (i = 0; i < SIZE; i++, psu++)
    {
        printf("% -10s%s\n", psu->username, psu->password);
    }
    if (fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}

void encrypt(char *pwd)
{
    int i;
    for (i = 0; i < strlen(pwd); i++)
    {
        pwd[i] = pwd[i] ^ 15;
    }
}