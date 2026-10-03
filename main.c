#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Insira um número: \n");
    scanf("%d", &n1);
    printf("Insira outro número: \n");
    scanf("%d", &n2);
    printf("%d + %d = %d", n1, n2, n1 + n2);
}