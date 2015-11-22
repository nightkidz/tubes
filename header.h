#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <time.h>

using namespace std;

typedef struct element_status *address;
typedef struct element_like *addresslike;

struct status
{
    string id_status;
    string stats;
};

struct like
{
    string id_like;
};

struct element_like
{
    like infol;
    addresslike next;
    addresslike prev;
};

struct element_status
{
    status infos;
    address next;
    address prev;
    addresslike nextL;
    addresslike prevL;
};

struct List
{
    address first;
    address last;
};

bool isEmptyStatus (List L);
void CreateListStatus(List &L);
address alokasi(status x);
void addStatus(List *L, address p);
address findStatus(List &L, status x);
void EditStatus(List &L,status x);

#endif // HEADER_H_INCLUDED
