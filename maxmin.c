#include<stdio.h>

int readPositiveInteger ();
int maximum (int n, int m);
int minimum (int a, int b);

int main () {
    int n1, n2, n3, n4, max, min, i;

    n1 = readPositiveInteger();
    n2 = readPositiveInteger();
    n3 = readPositiveInteger ();
    n4 = readPositiveInteger ();

    printf("\nthe maximum = %d", maximum(maximum(maximum(n1, n2),n3), n4));
    printf("\nthe minimum = %d\n", minimum(minimum(minimum(n1,n2),n3),n4));


}

int readPositiveInteger (){
    int y;
    do{
        printf("enter a strictly positive integer : ");
        scanf("%d",&y);
    }while(y < 0);

    return y;
}

int maximum (int n, int m){
    int k;
    k = (n < m)?m:n;

    return k;
}

int minimum (int a, int b){
    int l;

    l = (a < b)?a:b;

    return l;
}
