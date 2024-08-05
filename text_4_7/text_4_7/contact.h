#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define DEFAULT_SZ 3
#define INC 2
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;



typedef struct Contact
{
	PeoInfo* date;
	int count;
	int capacity;
}Contact;

//¾²Ì¬°æ±¾
//typedef struct Contact
//{
//	PeoInfo date[MAX];
//	int count;
//	int capacity;
//}Contact;


void InitContact(Contact* pc);

void DestroyContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void CheckCapacity(Contact* pc);

void SaveContact(Contact* pc);

void LoadContact(Contact* pc);







