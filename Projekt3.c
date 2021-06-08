//
// Created by Andrea on 6/4/2021.
//
#include "cmake-build-debug/Projekt3.h"

IntArray* createArray(int dimension){
    (*dimension)=(intArray*)malloc(size*sizeof(intArray));
    if((*dimension)==0){
        return false;
    }
    for (int i=0;i<size;i++){
        (dimension)[i]->name=(int*)malloc(sizeof(int)*30);
        (*dimension)[i].number=(int*)malloc(sizeof(int )*30);
        if((*dimension)[i].name==0 || (*dimension)[i].number==0){
            return  false;
        }
    }
    return true;
}

void readArray(const char *fileName, IntArray **array) {
    FILE *fin = fopen("be.txt", "r");
    int n, edge;
    fscanf(fin, "%i%i", &n, &edge);
    array * arrays;
    arrays = (int *) malloc((n + 1) * sizeof(array));
    if (arrays == NULL) {
        printf("Unsuccessful Reservation");
        return 0;
    }
}

void fillArray(int* array, int dimension, int first, int last){
    *first = get_size(*first, 1);
    *last = get_size(*last, 2);
    *array = malloc(*first * sizeof(int *));
    *dimension = malloc(*last * sizeof(int *));
    input_data(&array, *first, 1);
}

void input_data(int *array, int size, int value){
    for (int i=0; i<size; i++) {
        array[i] = value;
    }
}

void printArray(IntArray* array){
    printf("%d", array);
}

void printArrayToFile(const char* fileName, IntArray *array){
    int print = 0;
    FILE *f = fopen();
    print = printf(array, sizeof(char), sizeof(fileName), f);
    if (print == 0) {
        printf("Error during printing to file !");
    }
    fclose(f);
}

void sortArray(IntArray *array){
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[min_idx])
                min_idx = j;
    }
    sort(&array[min_idx], &array[i]);
}

int findElement(IntArray *array, int element){
    int *array[i];
    int i, toSearch, found;
    for(i=0; i<element; i++)
    {
        printf("%d", &array[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0;

    for(i=0; i<element; i++){
        if(array[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

}

void deleteElement(IntArray *array, int element){
    int position, c;
    printf("Enter %d elements\n", n);

    for (c = 0; c < element; c++)
        scanf("%d", &array[element]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= element+1) {
        printf("Deletion not possible.\n");
    }
    else
    {
        for (c = position - 1; c < element - 1; c++) {
            array[c] = array[c + 1];
        }

        printf("Resultant array:\n");

        for (c = 0; c < element - 1; c++) {
            printf("%d\n", array[c]);
        }
    }
}

int minimum(IntArray* array){
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[min_idx])
                min_idx = j;
    }
    sort(&array[min_idx], &array[i]);
}

int maximum(IntArray* array){
    max = array[0]; index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
}

void copy(IntArray* arrayTo, IntArray* arrayFrom){
    ptr = array;
    p = g_array;
    for (int i = arrayTo; i <= arrayFrom; i++) {
        g_array[i] = array[i];
    }

    while(1);
}

int linearSearch(IntArray* array, int element){
    int i;
    for (i = 0; i < element; i++)
        if (array[i] == element)
            return i;
    return -1;
}

int binarySearch(IntArray* array, int start, int end, int element){
    int m;

    if (start > end)
        return -1;

    m = (start + end)/2;

    if (array[m] == element)
        return m;
    else if (element > array[m])
        return binarySearch(array, m+1, end, element);
    else
        return binarySearch(array, start, m-1, element);
}

double calculateAverageTime(enum DSType type, Word word, enum Operation operation, int index) {

    int counter = 10;
    double  avgResult = 0;
    switch (type) {
        case ArrayType
            printf("Invalid data structure\n")
            break
    }
    return avgResult / counter;
}