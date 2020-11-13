/*Za dvije sortirane liste L1 i L2 (mogu se proèitati iz datoteke ili unijeti ruèno, bitno je
samo da su sortirane), napisati program koji stvara novu vezanu listu tako da raèuna:
a) L1 L2 PRESJEK
b) L1 L2 UNIJA
Liste osim pokazivaèa na slijedeæu strukturu imaju i jedan cjelobrojni element, po
kojem su sortirane.*/

#ifdef MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef ERROR
#define ERROR -1
#endif // ERROR


#ifndef SUCCESS
#define SUCCESS 0
#endif // SUCCESS

#ifndef BUFFER_LENGTH 1024
#define BUFFER_LENGTH 1024
#endif // BUFFER_LENGTH

struct _Cvor;
typedef struct _Cvor _CVOR;
typedef struct _Cvor* Position;
struct _Cvor
{
    int koeficijent;
	Position Next;
};
int printMenu();
int create(Position *);
int readfromfile(Position);
int printlist(Position);
int Presjek(Position, Position, Position);
int Unija(Position, Position, Position);
int main()
{
    int err = SUCCESS;
    struct _Cvor = L1,L2;
    L1.Next=NULL;
    L2.Next=NULL;
    P.Next=NULL;
    U.Next=NULL;
    err=printMenu();
    if (err)
        return err;

    printf("\nLista 1: ")
    err = readfromfile(&L1);
    if (err)
        return err;
    printf("L1: ")
    printlist(L1.Next);

    printf("\nLista 2: ");
    err = readfromfile(&L2);
    if (err)
        return err;
    printf("L2 : ");
    printlist(L2.Next);


    printf("\nUnija: ");
    err = Unija(L1.Next, L2.Next, &U);
    if (err)
        return err;
    printMenu(U.Next)

    printf("\nPresjek: ");
    err =Presjek(L1.Next, L2.Next; &P);
    if err
        return (err);
    printMenu(P.Next);

    return err;
}

int printMenu()
{

    printf("\nLab5 - 13.11.2020");
    return SUCCESS;

}
int create(Position *head)
{
    Position q = NULL;
    *head = (Position)malloc(sizeof(_CVOR));
	if (*head == NULL)
        return ERROR;
    q = *head;
	q->Next = NULL;

	return SUCCESS;


}
int readfromfile(Position O)
{
    int err = SUCCESS;
    Position q = NULL;
    Position temp = NULL;
    char *fileName = NULL;
    FILE *fp = NULL;
    fileName = (char*)malloc(sizeof(char) * BUFFER_LENGTH);
	if (fileName == NULL)
        return ERROR;
	memset(fileName, '\0', BUFFER_LENGTH);
	/* it is used to fill a block of memory with given/particular value.
	It is used when you want to fill all or some of the blocks of the memory with a particular value.*/

	printf("Unesite naziv datoteke za èitanje: ");
	scanf("%s", fileName);

	if (strchr(fileName, '.') == NULL)
	    strcat(fileName, ".txt");

    fp = fopen(fileName, "r");
	if (fp == NULL)
	{
		printf("\r\nDatoteka nije otvorena", fileName);
		return ERROR;
	}



	fclose(fp);

}



int printlist(Position)
{

}

int Presjek(Position, Position, Position)
{

}
int Unija(Position, Position, Position)
{

}





