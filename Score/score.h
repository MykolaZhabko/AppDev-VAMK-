#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//usually these information are given in a header file:
// 1. Constant definition (e.g., #define PI 3.1415)
// 2. data structure definitions
// 3. function prototypes (a.k.a function declaration)

#define MAX 30

void input_scores(int*);
void evaluation(int*, int*);
void classification(int[], int[]);
void output_results(int[], int[]);
