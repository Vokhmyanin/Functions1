#pragma once
#include"constants.h"
int Sum(const int arr[], const int n);
double Sum(const double  arr[], const int n);
char Sum(char  arr[], const int n);

int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Average(const int arr[], const int n);
double Average(double const arr[], const int n);
double Average(char arr[], const int n);

double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);


int Min(int arr[], const int n);
double Min(const double arr[], const int n);
char Min(char arr[], const int n);

int Max(int arr[], const int n);
double Max(const double arr[], const int n);
char Max(char arr[], const int n);
