/*7. Napisati program koji iz datoteke èita postfiks izraz i zatim korištenjem stoga raèuna
rezultat. Stog je potrebno realizirati preko vezane liste.*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

#ifndef ERROR
#define ERROR -1
#endif // ERROR

#ifndef SUCCESS
#define SUCCESS 0
#endif // SUCCESS

#ifndef BUFFER_LENGTH
#define BUFFER_LENGTH 1024
#endif // BUFFER_LENGTH

struct _Cvor;
typedef struct _Cvor _CVOR;
typedef struct _Cvor* Position;
struct _Cvor
{
    float element;
    Position next;

};
int createNew(Position *);
int printMenu();
int push(Position, float);
int pop(Position, float);


int main(int argc, char *argv[])
{
    int ERROR = SUCCESS;

    char *fileName = NULL;
    _CVOR_Stack;
    _Stack.Next = NULL;

    printMenu();

    fileName =(char*)malloc(sizeof(char)*BUFFER_LENGTH);
    if (fileName == NULL); return ERROR;

    memset(fileName, '\0', BUFFER_LENGTH);

    return ERROR;

}

int createNew(Position *head)
{
    Position q = NULL;

	*head = (Position)malloc(sizeof(_CVOR));
	if (*head == NULL) return ERROR;

	q = *head;
	q->Next = NULL;

	return SUCCESS;


}

int printMenu()
{

    printf("lab 7");
    return SUCCESS;


}


















