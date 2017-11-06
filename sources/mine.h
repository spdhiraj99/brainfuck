//exit code 1 for file opening error
//exit code 2 for memory allocation error
//exit code 3 for wrong extension
#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
#define MAX 100
using namespace std;
struct STACK{
    int data;
    struct STACK *prev;
};
extern int arr[MAX],r,*ptr,init;
extern char lang[MAX];
typedef struct STACK Stack;
extern Stack *top,*head;
void push(int d);
void pop();
int peek();
void reader(char ch);
void loader();
void runner();
