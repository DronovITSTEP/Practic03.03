#pragma once
#include <iostream>

using namespace std;

/*
3. В файле function.h нужно :
a) описать прототипы всех функций;
b) сделать проверку определена ли константа,
указывающая на тип данных(#ifdef INTEGER);
c) создать обобщающие имена функции, которым будет
определена функция соответствующего типа в
зависимости от константы, указанной в файле prog.
cpp(# define show ShowInt).
*/
#define CHAR

#ifdef INTEGER

#define Add			AddArrayInt
#define Show		ShowArrayInt
#define FindMin		FindMinArrayInt
#define FindMax		FindMaxArrayInt
#define SortArray	SortArrayInt
#define UpdateArray UpdateArrayInt

#endif
#ifdef DOUBLE

#define Add			AddArrayDouble
#define Show		ShowArrayDouble
#define FindMin		FindMinArrayDouble
#define FindMax		FindMaxArrayDouble
#define SortArray	SortArrayDouble
#define UpdateArray UpdateArrayDouble

#endif
#ifdef CHAR

#define Add			AddArrayChar
#define Show		ShowArrayChar
#define FindMin		FindMinArrayChar
#define FindMax		FindMaxArrayChar
#define SortArray	SortArrayChar
#define UpdateArray UpdateArrayChar

#endif

void AddArrayInt(int* arr, int size);
void ShowArrayInt(int* arr, int size);
int FindMinArrayInt(int* arr, int size);
int FindMaxArrayInt(int* arr, int size);
void SortArrayInt(int* arr, int size);
void UpdateArrayInt(int* arr, int size, int val, int index);

void AddArrayDouble(double* arr, int size);
void ShowArrayDouble(double* arr, int size);
double FindMinArrayDouble(double* arr, int size);
double FindMaxArrayDouble(double* arr, int size);
void SortArrayDouble(double* arr, int size);
void UpdateArrayDouble(double* arr, int size, double val, int index);

void AddArrayChar(char* arr, int size);
void ShowArrayChar(char* arr, int size);
char FindMinArrayChar(char* arr, int size);
char FindMaxArrayChar(char* arr, int size);
void SortArrayChar(char* arr, int size);
void UpdateArrayChar(char* arr, int size, char val, int index);





