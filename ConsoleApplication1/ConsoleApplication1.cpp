#include"pch.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st {
	char name[10];
	int Cgrade, Mgrade, Egrade, total;
	st *next;
}st;
struct pack {
	int num;
	int MAX, MIN;
	char MAXname[5], MINname[5];
	int CMAX, CMIN;
	char CMAXname[5], CMINname[5];
	int MMAX, MMIN;
	char MMAXname[5], MMINname[5];
	int EMAX, EMIN;
	char EMAXname[5], EMINname[5];
	st *next;
};
struct pack p = { 0,0,INT_MAX,"0","0",0,INT_MAX,"0","0",0,INT_MAX,"0","0",0,INT_MAX,"0","0",NULL };
st *end;
st *endpr;
void HTL(st *p) {
	if (p->next != NULL) {
		HTL(p = p->next);
	}
	printf("%s  %d  %d  %d  %d\n", p->name, p->total, p->Cgrade, p->Mgrade, p->Egrade);
}
void LTH() {
	st *q = p.next->next;
	while (q != NULL) {
		printf("%s  %d  %d  %d  %d\n", q->name, q->total, q->Cgrade, q->Mgrade, q->Egrade);
		q = q->next;
	}
}
void tsort() {
	end->next= (st*)malloc(sizeof(st));
	end = end->next;
	st *tra = p.next->next;
	st *trapr = p.next;
	st *mark;
	st *markpr;
	st *foot = end;
	int n = INT_MAX;
	while (p.next->next != foot) {
		while (tra != foot) {
			if (tra->total <= n) {
				n = tra->total;
				mark = tra;
				markpr = trapr;
				trapr = tra;
				tra = tra->next;
			}
			else {
				trapr = tra;
				tra = tra->next;
			}
		}
		markpr->next = mark->next;
		end->next = mark;
		end = mark;
		mark->next = NULL;
		tra = p.next->next;
		trapr = p.next;
		n = INT_MAX;
	}
	p.next->next = foot->next;
	free(foot);
	int m;
	printf("*****************************************\n");
	printf("*   1.由高到低排序                      *\n");
	printf("*   2.由低到高排序                      *\n");
	printf("*                     0.退出            *\n");
	printf("*****************************************\n");
	printf("请输入功能序号：");
	scanf("%d", &m);
	system("cls");
	switch (m) {
	case 1:HTL(p.next->next); break;
	case 2:LTH(); break;
	case 0:return;
	}
}
void Csort() {
	end->next = (st*)malloc(sizeof(st));
	end = end->next;
	st *tra = p.next->next;
	st *trapr = p.next;
	st *mark;
	st *markpr;
	st *foot = end;
	int n = INT_MAX;
	while (p.next->next != foot) {
		while (tra != foot) {
			if (tra->Cgrade <= n) {
				n = tra->Cgrade;
				mark = tra;
				markpr = trapr;
				trapr = tra;
				tra = tra->next;
			}
			else {
				trapr = tra;
				tra = tra->next;
			}
		}
		markpr->next = mark->next;
		end->next = mark;
		end = mark;
		mark->next = NULL;
		tra = p.next->next;
		trapr = p.next;
		n = INT_MAX;
	}
	p.next->next = foot->next;
	free(foot);
	int m;
	printf("*****************************************\n");
	printf("*   1.由高到低排序                      *\n");
	printf("*   2.由低到高排序                      *\n");
	printf("*                     0.退出            *\n");
	printf("*****************************************\n");
	printf("请输入功能序号：");
	scanf("%d", &m);
	system("cls");
	switch (m) {
	case 1:HTL(p.next->next); break;
	case 2:LTH(); break;
	case 0:return;
	}
}
void Msort() {
	end->next = (st*)malloc(sizeof(st));
	end = end->next;
	st *tra = p.next->next;
	st *trapr = p.next;
	st *mark;
	st *markpr;
	st *foot = end;
	int n = INT_MAX;
	while (p.next->next != foot) {
		while (tra != foot) {
			if (tra->Mgrade <= n) {
				n = tra->Mgrade;
				mark = tra;
				markpr = trapr;
				trapr = tra;
				tra = tra->next;
			}
			else {
				trapr = tra;
				tra = tra->next;
			}
		}
		markpr->next = mark->next;
		end->next = mark;
		end = mark;
		mark->next = NULL;
		tra = p.next->next;
		trapr = p.next;
		n = INT_MAX;
	}
	p.next->next = foot->next;
	free(foot);
	int m;
	printf("*****************************************\n");
	printf("*   1.由高到低排序                      *\n");
	printf("*   2.由低到高排序                      *\n");
	printf("*                     0.退出            *\n");
	printf("*****************************************\n");
	printf("请输入功能序号：");
	scanf("%d", &m);
	system("cls");
	switch (m) {
	case 1:HTL(p.next->next); break;
	case 2:LTH(); break;
	case 0:return;
	}
}
void Esort() {
	end->next = (st*)malloc(sizeof(st));
	end = end->next;
	st *tra = p.next->next;
	st *trapr = p.next;
	st *mark;
	st *markpr;
	st *foot = end;
	int n = INT_MAX;
	while (p.next->next != foot) {
		while (tra != foot) {
			if (tra->Egrade <= n) {
				n = tra->Egrade;
				mark = tra;
				markpr = trapr;
				trapr = tra;
				tra = tra->next;
			}
			else {
				trapr = tra;
				tra = tra->next;
			}
		}
		markpr->next = mark->next;
		end->next = mark;
		end = mark;
		mark->next = NULL;
		tra = p.next->next;
		trapr = p.next;
		n = INT_MAX;
	}
	p.next->next = foot->next;
	free(foot);
	int m;
	printf("*****************************************\n");
	printf("*   1.由高到低排序                      *\n");
	printf("*   2.由低到高排序                      *\n");
	printf("*                     0.退出            *\n");
	printf("*****************************************\n");
	printf("请输入功能序号：");
	scanf("%d", &m);
	system("cls");
	switch (m) {
	case 1:HTL(p.next->next); break;
	case 2:LTH(); break;
	case 0:return;
	}
}
void addst() {
	char n = 'y';
	while (n != 'n') {
		end->next = (st*)malloc(sizeof(st));
		end = end->next;
		end->next = NULL;
		puts("请输入学生姓名：");
		scanf("%s", end->name);
		puts("请输入语文成绩：");
		scanf("%d", &end->Cgrade);
		if (end->Cgrade > p.MAX) {
			p.MAX = end->Cgrade;
			strcpy(p.MAXname, end->name);
		}
		if (end->Cgrade < p.MIN) {
			p.MIN = end->Cgrade;
			strcpy(p.MINname, end->name);
		}
		if (end->Cgrade > p.CMAX) {
			p.CMAX = end->Cgrade;
			strcpy(p.CMAXname, end->name);
		}
		if (end->Cgrade < p.CMIN) {
			p.CMIN = end->Cgrade;
			strcpy(p.CMINname, end->name);
		}
		puts("请输入数学成绩：");
		scanf("%d", &end->Mgrade);
		if (end->Mgrade > p.MAX) {
			p.MAX = end->Mgrade;
			strcpy(p.MAXname, end->name);
		}
		if (end->Mgrade < p.MIN) {
			p.MIN = end->Mgrade;
			strcpy(p.MINname, end->name);
		}
		if (end->Mgrade > p.MMAX) {
			p.MMAX = end->Mgrade;
			strcpy(p.MMAXname, end->name);
		}
		if (end->Mgrade < p.MMIN) {
			p.MMIN = end->Mgrade;
			strcpy(p.MMINname, end->name);
		}
		puts("请输入英语成绩：");
		scanf("%d", &end->Egrade);
		if (end->Egrade > p.MAX) {
			p.MAX = end->Egrade;
			strcpy(p.MAXname, end->name);
		}
		if (end->Egrade < p.MIN) {
			p.MIN = end->Egrade;
			strcpy(p.MINname, end->name);
		}
		if (end->Egrade > p.EMAX) {
			p.EMAX = end->Egrade;
			strcpy(p.EMAXname, end->name);
		}
		if (end->Egrade < p.EMIN) {
			p.EMIN = end->Egrade;
			strcpy(p.EMINname, end->name);
		}
		p.num++;
		end->total = end->Cgrade + end->Egrade + end->Mgrade;
		printf("继续输入？y/n\n");
		getchar();
		scanf("%c", &n);
		getchar();
		system("cls");
	}
}
void sortUI() {
	int i = 1;
	if (p.num == 0) {
		while (i) {
			printf("抱歉！目前学生数据为空！\n按0退出。");
			scanf("%d", &i);
		}
		return;
	}
	while (1) {
		printf("*****************************************\n");
		printf("*   1.按总分          2.按语文成绩      *\n");
		printf("*   3.按数学成绩      4.按英语成绩      *\n");
		printf("*                     0.退出            *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:tsort(); break;
		case 2:Csort(); break;
		case 3:Msort(); break;
		case 4:Esort(); break;
		case 0:return;
		}
	}
}
int main() {
	p.next = (st*)malloc(sizeof(st));//建一个空的头结点
	end = p.next;
	while (1) {
		printf("*****************************************\n");
		printf("*   1.添加学生          2.分数统计      *\n");
		printf("*   3.成绩排序          4.查找学生      *\n");
		printf("*                       0.退出          *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:addst(); break;
		case 2:break;
		case 3:sortUI(); break;
		case 4:break;
		case 5:break;
		case 0:return 0;
		}
	}
}