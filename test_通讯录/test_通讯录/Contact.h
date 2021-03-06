#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define Name_Max 20
#define Addr_Max 20
#define Sex_Max 5
#define Phone_Max 20

#define Max 1000
#define DEFAULT_SZ 3

typedef struct PeoInfo
{
	char name[Name_Max];
	short age;
	char sex[Sex_Max];
	char phone[Phone_Max];
	char addr[Addr_Max];
}PeoInfo;
enum option
{
    Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;//����
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(Contact* pcon);
void ModifyContact(Contact* pcon);
void SortContact(Contact* pcon);
void DestroyContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);