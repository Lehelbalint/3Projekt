//
// Created by Andrea on 6/4/2021.
//

#ifndef PROJEKT3_PROJEKT3_H
#define PROJEKT3_PROJEKT3_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int size;
    int *elements;
} IntArray;

IntArray* createArray(int dimension);
void readArray(const char *fileName, IntArray **array);
void fillArray(int* array, int dimension, int first, int last);
void printArray(IntArray* array);
void printArrayToFile(const char* fileName, IntArray *array);
void sortArray(IntArray *array);
int findElement(IntArray *array, int element);
void deleteElement(IntArray *array, int element);
int minimum(IntArray* array);
int maximum(IntArray* array);
void copy(IntArray* arrayTo, IntArray* arrayFrom);
int linearSearch(IntArray* array, int element);
int binarySearch(IntArray* array, int start, int end, int element);


#endif //PROJEKT3_PROJEKT3_H
