#define   _CRT_SECURE_NO_WARNINGS

#include "contact.h"


void LoadContact(Contact* pc)
{
	assert(pc);
	FILE* pfread = fopen("contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pfread) == 1)
	{
		CheckCapacity(pc);
		pc->date[pc->count] = tmp;
		pc->count++;
	}
	fclose(pfread);
	pfread = NULL;
}


//��ʼ��
void InitContact(Contact* pc) 
{
	assert(pc);
	pc->count = 0;
	//memset(pc->date, 0, sizeof(pc->date));
	pc->date = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->date == NULL)
	{
		printf("InitContact : %s\n", strerror(errno));
		return ;
	}
	pc->capacity = DEFAULT_SZ;
	LoadContact(pc);
	return ;
}

//��̬�汾
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->date, 0, sizeof(pc->date));
//}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->date);
	pc->date = NULL;
}


void CheckCapacity(Contact* pc)
{
	assert(pc);
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->date, (pc->capacity + INC) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact :: %s\n", strerror(errno));
			return;
		}
		else
		{
			pc->date = ptr;
			pc->capacity += INC;
			printf("���ݳɹ�\n");
		}
	}
}


//���
void AddContact(Contact* pc)
{
	assert(pc);
	CheckCapacity(pc);
	printf("����������:>");
	scanf("%s", pc->date[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
	printf("��ӳɹ�\n");
}

//��̬�汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->date == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->date[pc->count].name);
//	printf("����������:>");
//	scanf("%d", &(pc->date[pc->count].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->date[pc->count].sex);
//	printf("������绰:>");
//	scanf("%s", pc->date[pc->count].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->date[pc->count].addr);
//	pc->count++;
//	printf("��ӳɹ�\n");
//}

//��ӡͨѶ¼
void ShowContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->date[i].name, 
											   pc->date[i].age,
											   pc->date[i].sex,
											   pc->date[i].tele,
											   pc->date[i].addr);
	}
}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����Ϣɾ��\n");
		return;
	}
	printf("������ɾ����������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	int i = 0;
	for (i = pos; i < pc->count-1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");

}

//����
void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = {0};
	printf("������Ҫ���Ҷ�������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->date[pos].name,
		pc->date[pos].age,
		pc->date[pos].sex,
		pc->date[pos].tele,
		pc->date[pos].addr);
}


//�޸�
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸Ķ�������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->date[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->date[pos].addr);
	printf("�޸ĳɹ�\n");
}


int cmp_peo_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(PeoInfo), cmp_peo_name);
	printf("����ɹ�\n");
}

void SaveContact(Contact* pc)
{
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->date+i, sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}




