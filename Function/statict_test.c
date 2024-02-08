#include <stdio.h>
#include <math.h>

static float a, b, c, Delta, x, x1, x2;

int saisir() {
    printf("Entrer le nombre a: ");
    scanf("%f", &a);
    printf("Entrer le nombre b: ");
    scanf("%f", &b);
    printf("Entrer le nombre c: ");
    scanf("%f", &c);
    return 0;
}

float delta() {
    Delta = pow(b, 2) - 4 * (a + c);
    return Delta;
}

void count() {
    if (Delta < 0) {
        printf("Pas de solutions\n");
    } else if (Delta == 0) {
        x = -b / (2 * a);
        printf("x = %f\n", x);
    } else {
        x1 = (-b - sqrt(Delta)) / (2 * a);
        x2 = (-b + sqrt(Delta)) / (2 * a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
}

int main() {
    saisir();
    Delta = delta();
    count();
    return 0;
}