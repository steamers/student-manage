#include"pch.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st{
	char name[5];
	int Cgrade, Mgrade, Egrade;
	st *next;
}st;
struct pack {
	int num = 0;
	int MAX = 0, MIN = INT_MAX;
	char MAXname[5], MINname[5];
	int CMAX = 0, CMIN = INT_MAX;
	char CMAXname[5], CMINname[5];
	int MMAX = 0, MMIN = INT_MAX;
	char MMAXname[5], MMINname[5];
	int EMAX = 0, EMIN = INT_MAX;
	char EMAXname[5], EMINname[5];
	st *head;
};
struct pack *p=(struct pack*)malloc(sizeof(struct pack));
st *end=p->head;
st *work = end;
FILE *fp ;
void addst() {
	fp = fopen("C:\\Users\\Administrator\\Desktop\\student.txt", "a+");
	if (fp == NULL)
		exit(1);
	char n='y';
	while (n!='n') {
		end = (st*)malloc(sizeof(st));
		puts("请输入学生姓名：");
		scanf("%s", &end->name);
		fprintf(fp, "%s", end->name);
		puts("请输入语文成绩：");
		scanf("%d", &end->Cgrade);
		fprintf(fp, "%d", end->Cgrade);
		if (end->Cgrade > p->MAX) {
			p->MAX = end->Cgrade;
			strcpy(p->MAXname, end->name);
		}
		if (end->Cgrade < p->MIN) {
			p->MIN = end->Cgrade;
			strcpy(p->MINname, end->name);
		}
		if (end->Cgrade > p->CMAX) {
			p->CMAX = end->Cgrade;
			strcpy(p->CMAXname, end->name);
		}
		if (end->Cgrade < p->CMIN) {
			p->CMIN = end->Cgrade;
			strcpy(p->CMINname, end->name);
		}
		puts("请输入数学成绩：");
		scanf("%d", &end->Mgrade);
		fprintf(fp, "%d", end->Mgrade);
		if (end->Mgrade > p->MAX) {
			p->MAX = end->Mgrade;
			strcpy(p->MAXname, end->name);
		}
		if (end->Mgrade < p->MIN) {
			p->MIN = end->Mgrade;
			strcpy(p->MINname, end->name);
		}
		if (end->Mgrade > p->MMAX) {
			p->MMAX = end->Mgrade;
			strcpy(p->MMAXname, end->name);
		}
		if (end->Mgrade < p->MMIN) {
			p->MMIN = end->Mgrade;
			strcpy(p->MMINname, end->name);
		}
		puts("请输入英语成绩：");
		scanf("%d", &end->Egrade);
		fprintf(fp, "%d", end->Egrade);
		if (end->Egrade > p->MAX) {
			p->MAX = end->Egrade;
			strcpy(p->MAXname, end->name);
		}
		if (end->Egrade < p->MIN) {
			p->MIN = end->Egrade;
			strcpy(p->MINname, end->name);
		}
		if (end->Egrade > p->EMAX) {
			p->EMAX = end->Egrade;
			strcpy(p->EMAXname, end->name);
		}
		if (end->Egrade < p->EMIN) {
			p->EMIN = end->Egrade;
			strcpy(p->EMINname, end->name);
		}
		p->num++;
		end = end->next;
		printf("继续输入？y/n\n");
		getchar();
		scanf("%c", &n);
		system("cls");
	}
}
int main() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.添加学生          2.分数统计      *\n");
		printf("*   3.成绩排序          4.查找学生      *\n");
		printf("*   5.保存              0.退出          *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:addst(); break;
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:break;
		case 0:return 0;
		}
	}
}