#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, raiz1, raiz2;

  
    printf("Digite os numeros para a equação de 2 grau nas posiçoes , a , b , c respectivamente");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    delta = (b * b) - (4 * a * c);

    if (a == 0) {
        printf("Coeficiente 'a' não pode ser 0 em uma equação de 2º grau.\n");
    } else if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
      
        raiz1 = -b / (2 * a);
        printf("A equação possui uma única raiz real: %.2lf\n", raiz1);
    } else {
        
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: %.2lf e %.2lf\n", raiz1, raiz2);
    }

    return 0;
}
