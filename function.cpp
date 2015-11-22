#include "header.h"

bool isEmptyStatus (List *L)
{
    if (L->first == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CreateListStatus(List &L)
{
    L.first=NULL;
    L.last=NULL;
}

address alokasi(status x)
{
    address p = new element_status;
    if (p != NULL)
    {
        p->infos = x;
        p->next = NULL;
    }
    else
    {
        cout << "Alokasi Gagal" << endl;
    }
    return p;
}

void addStatus(List *L, address p)
{
    if (isEmptyStatus(L) == true)
    {
        L->first = p;
        p->next = NULL;
    }
    else
    {
        address tmp = L->first;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = p;
        p->next = NULL;
    }
}

address findStatus(List &L, status x)
{
    address P = L.first;
    while (P != NULL)
    {
        if (P->infos.id_status == x.id_status)
        {
            return P;
        }
        P = P->next;
    }
    return 0;
}

void EditStatus(List &L,status x)
{
    address p=L.first;
    string s;
    if(p==NULL)
    {
        cout<<"Data Kosong"<<endl;
    }
    else if (p!=NULL)
    {
        findStatus(L,x);
        cout<<"Masukkan Status: ";
        cin>>s;
        cout<<"Status Berhasil Diedit";
    }
}
