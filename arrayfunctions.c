#include<stdio.h>
#include<math.h>

#define N 100

int readArray ();
void displayArray ();
float arrayAverage ();
int number_positive_elements ();
float dot_product ();
float eucliadianDistance ();

int main () {
    int m ,s;
    float arr[N] , arr1[N];

//read the array

    printf("\nnumber of elements is : %d\n", m = readArray(arr));

    printf("\n~~~~~~~~\n");

    printf("\nnumber of elements is : %d\n", s = readArray(arr1));

    printf("\n~~~~~~~~\n");

// euclidiand distance

    if (m == s){

        printf("\nthe euclidian distance of the two arrays is = %.2f\n", eucliadianDistance(arr, m, arr1, s));

    }

    printf("\n~~~~~~~~\n");

// dot product

    if (m == s){

        printf("\nthe dot product of the two arrays is = %.2f\n", dot_product(arr, m, arr1, s));

    }

    printf("\n~~~~~~~~\n");

// average

    printf("\nthe average of arr = %.2f\n", arrayAverage(arr, m));

    printf("\n~~~~~~~~\n");

// number of positive elements

    printf("\nnumber of positive elements in this array : %d", number_positive_elements(arr , m));

    printf("\n~~~~~~~~\n");

// display the array

    displayArray (arr, m);

    printf("\n~~~~~~~~\n");

    displayArray (arr1, s);
}

int readArray (float array[N]) {
    int n, i;

    do{

        printf("enter the number of elements : ");
        scanf("%d",&n);

    } while ( n < 0 || n > N);

    for (i = 0; i < n; i++) {

        printf("arr [%d] = ",i);
        scanf("%f", &array[i]);

    }

    return n;
}

void displayArray (float array[N], int n) {
    int i;

    for(i = 0; i < n; i++){

        printf("arr [%d] = %.2f\n",i , array[i]);

    }

}

float arrayAverage (float arr[N], int n) {
    int i;
    float k = 0;

    for(i = 0; i < n; i++) {

        k = k + arr[i];

    }

    k = k / n;

    return k;
}

int number_positive_elements (float array[N], int n) {
    int nb = 0, i;

    for(i = 0; i < n; i++) {
        if (array[i] > 0) {
            nb = nb + 1;
        }
    }

    return nb;
}

float dot_product (float arr1[N] , int n , float arr2[N] , int m) {
    int i; 
    float result = 0;

    for (i = 0; i < m ; i++){

        result = result + arr1[i] * arr2[i];

    }

    return result;
}


float eucliadianDistance (float arr1[N] , int n, float arr2[N], int m) {
    int i;
    float result = 0;

    for(i = 0; i < n; i++){

        result = result + (arr1[i] - arr2[i]) * (arr1[i] - arr2[i]);

    }

    result = sqrt(result);

    return result;
