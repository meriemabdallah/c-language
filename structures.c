#include<stdio.h>
#include<stdlib.h>

#define M 80

// structures

typedef struct {

    char brand[M], origin[M];
    int ref, generation;
    float fare;

}laptop;

// prototypes

void readlaptop (laptop *);
void displaylaptop ();
int newer ();

int main () {

    laptop s, *p, a;

    readlaptop (&s);
    displaylaptop (s);

    p = (laptop *)malloc(sizeof(laptop));

    readlaptop (p);
    displaylaptop (*p);

    if (newer (s, *p) == 1)
        printf("\n%s is newer than %s", s.brand, p->brand );

    if (newer (s, *p) == -1)
        printf("\n%s is older than %s", s.brand, p->brand);

    if (newer (s, *p) == 0)
        printf("\n%s has a processor of the same generation as %s", s.brand, p->brand);




}

void readlaptop (laptop *p) {
    printf("enter the laptop information:\n");

    printf("enter the brand : ");
    fgets(p->brand, M, stdin);

    printf("enter its origin : ");
    fgets(p->origin, M, stdin);

    printf("enter its ref : ");
    scanf("%d", &p->ref);

    printf("enter the fare ( price of the laptop ) : ");
    scanf("%f", &p->fare);

    printf("enter its generation : ");
    scanf("%d", &p->generation);

    getchar();

}

void displaylaptop (laptop p) {

    printf("\nthe laptob information : \n");

    printf("\n%d : %s\t%s", p.ref , p.brand, p.origin);
    printf("\n%d \t %.2f\n", p.generation, p.fare);


}

int newer (laptop c1, laptop c2) {

    if (c1.generation > c2.generation) {
        return 1;
    }
    if (c1.generation < c2.generation) {
        return -1;
    }

    return 0;
}
