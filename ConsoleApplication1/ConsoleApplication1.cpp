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
		HTL(p->next);
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
	case 1:HTL(p.next->next);
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
	case 2:LTH();
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
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
	case 1:HTL(p.next->next); 
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
	case 2:LTH();
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
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
	case 1:HTL(p.next->next);
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
	case 2:LTH(); 
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
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
	case 1:HTL(p.next->next);
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
	case 2:LTH();
		printf("按0退出。");
		scanf("%d", &m);
		system("cls"); break;
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
void MAX() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.按所有课程      2.按语文成绩      *\n");
		printf("*   3.按数学成绩      4.按英语成绩      *\n");
		printf("*                     0.退出            *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:printf("%s  %d\n", p.MAXname, p.MAX); break;
		case 2:printf("%s  %d\n", p.CMAXname, p.CMAX); break;
		case 3:printf("%s  %d\n", p.MMAXname, p.MMAX); break;
		case 4:printf("%s  %d\n", p.EMAXname, p.EMAX); break;
		case 0: {system("cls"); return; }
		}
		while (n) {
			printf("按0退出。\n");
			scanf("%d", &n);
			system("cls"); return;
		}
	}
}
void MIN() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.按所有课程      2.按语文成绩      *\n");
		printf("*   3.按数学成绩      4.按英语成绩      *\n");
		printf("*                     0.退出            *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:printf("%s  %d\n", p.MINname, p.MIN); break;
		case 2:printf("%s  %d\n", p.CMINname, p.CMIN); break;
		case 3:printf("%s  %d\n", p.MMINname, p.MMIN); break;
		case 4:printf("%s  %d\n", p.EMINname, p.EMIN); break;
		case 0: {system("cls"); return; }
		}
		while (n) {
			printf("按0退出。\n");
			scanf("%d", &n);
			system("cls"); return;
		}
	}
}
void taver() {
	float count = 0;
	int n = 1;
	st *work = p.next->next;
	while (work != NULL) {
		count += work->total;
		work = work->next;
	}
	printf("总分平均分为：%.2f分\n", count / p.num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Caver() {
	float count = 0;
	int n = 1;
	st *work = p.next->next;
	while (work != NULL) {
		count += work->Cgrade;
		work = work->next;
	}
	printf("语文平均分为：%.2f分\n", count / p.num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Maver() {
	float count = 0;
	int n = 1;
	st *work = p.next->next;
	while (work != NULL) {
		count += work->Mgrade;
		work = work->next;
	}
	printf("数学平均分为：%.2f分\n", count / p.num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Eaver() {
	float count = 0;
	int n = 1;
	st *work = p.next->next;
	while (work != NULL) {
		count += work->Egrade;
		work = work->next;
	}
	printf("英语平均分为：%.2f分\n", count / p.num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void averageUI() {
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
		case 1:taver(); break;
		case 2:Caver(); break;
		case 3:Maver(); break;
		case 4:Eaver(); break;
		case 0: {system("cls"); return; }
		}
	}
}
void Cper() {
	int count[5] = { 0 };
	int n = 1;
	float num = 0;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Cgrade <= 100 && work->Cgrade >= 90)
			count[0]++;
		else if (work->Cgrade <= 89 && work->Cgrade >= 80)
			count[1]++;
		else if (work->Cgrade <= 79 && work->Cgrade >= 70)
			count[2]++;
		else if (work->Cgrade <= 69 && work->Cgrade >= 60)
			count[3]++;
		else if (work->Cgrade < 60)
			count[4]++;
		work = work->next;
	}
	num = (count[0] / (float)p.num) * 100;
	printf("语文成绩100~90分人数：%d    占总人数%.2f%%\n", count[0], num);
	num = (count[1] / (float)p.num) * 100;
	printf("语文成绩89~80分人数：%d    占总人数%.2f%%\n", count[1], num);
	num = (count[2] / (float)p.num) * 100;
	printf("语文成绩79~70分人数：%d	   占总人数%.2f%%\n", count[2], num);
	num = (count[3] / (float)p.num) * 100;
	printf("语文成绩69~60分人数：%d	   占总人数%.2f%%\n", count[3], num);
	num = (count[4] / (float)p.num) * 100;
	printf("语文成绩60分一下人数：%d    占总人数%.2f%%\n", count[4], num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Mper() {
	int count[5] = { 0 };
	int n = 1;
	float num = 0;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Mgrade <= 100 && work->Mgrade >= 90)
			count[0]++;
		else if (work->Mgrade <= 89 && work->Mgrade >= 80)
			count[1]++;
		else if (work->Mgrade <= 79 && work->Mgrade >= 70)
			count[2]++;
		else if (work->Mgrade <= 69 && work->Mgrade >= 60)
			count[3]++;
		else if (work->Mgrade < 60)
			count[4]++;
		work = work->next;
	}
	num = (count[0] / (float)p.num) * 100;
	printf("数学成绩100~90分人数：%d    占总人数%.2f%%\n", count[0], num);
	num = (count[1] / (float)p.num) * 100;
	printf("数学成绩89~80分人数：%d    占总人数%.2f%%\n", count[1], num);
	num = (count[2] / (float)p.num) * 100;
	printf("数学成绩79~70分人数：%d	   占总人数%.2f%%\n", count[2], num);
	num = (count[3] / (float)p.num) * 100;
	printf("数学成绩69~60分人数：%d	   占总人数%.2f%%\n", count[3], num);
	num = (count[4] / (float)p.num) * 100;
	printf("数学成绩60分一下人数：%d    占总人数%.2f%%\n", count[4], num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Eper() {
	int count[5] = { 0 };
	int n = 1;
	float num = 0;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Egrade <= 100 && work->Egrade >= 90)
			count[0]++;
		else if (work->Egrade <= 89 && work->Egrade >= 80)
			count[1]++;
		else if (work->Egrade <= 79 && work->Egrade >= 70)
			count[2]++;
		else if (work->Egrade <= 69 && work->Egrade >= 60)
			count[3]++;
		else if (work->Egrade < 60)
			count[4]++;
		work = work->next;
	}
	num = (count[0] / (float)p.num) * 100;
	printf("英语成绩100~90分人数：%d    占总人数%.2f%%\n", count[0], num);
	num = (count[1] / (float)p.num) * 100;
	printf("英语成绩89~80分人数：%d    占总人数%.2f%%\n", count[1], num);
	num = (count[2] / (float)p.num) * 100;
	printf("英语成绩79~70分人数：%d	   占总人数%.2f%%\n", count[2], num);
	num = (count[3] / (float)p.num) * 100;
	printf("英语成绩69~60分人数：%d	   占总人数%.2f%%\n", count[3], num);
	num = (count[4] / (float)p.num) * 100;
	printf("英语成绩60分一下人数：%d    占总人数%.2f%%\n", count[4], num);
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void percentUI() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.按语文成绩      2.按数学成绩      *\n");
		printf("*   3.按英语成绩                        *\n");
		printf("*                     0.退出            *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:Cper(); break;
		case 2:Mper(); break;
		case 3:Eper(); break;
		case 0: {system("cls"); return; }
		}
	}
}
void Cgraph() {
	int count[5] = { 0 };
	int n = 1;
	int max = INT_MIN;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Cgrade <= 100 && work->Cgrade >= 90)
			count[0]++;
		else if (work->Cgrade <= 89 && work->Cgrade >= 80)
			count[1]++;
		else if (work->Cgrade <= 79 && work->Cgrade >= 70)
			count[2]++;
		else if (work->Cgrade <= 69 && work->Cgrade >= 60)
			count[3]++;
		else if (work->Cgrade < 60)
			count[4]++;
		work = work->next;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	for (int i1 = max; i1 > 0; i1--) {
		for (int i2 = 0; i2 < 5; i2++) {
			if (count[i2] >= i1) {
				printf("*	");
			}
			else
				printf("	");
		}
		printf("\n");
	}
	printf("100~90	89~80	79~70	69~60	60以下\n");
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Mgraph() {
	int count[5] = { 0 };
	int n = 1;
	int max = INT_MIN;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Mgrade <= 100 && work->Mgrade >= 90)
			count[0]++;
		else if (work->Mgrade <= 89 && work->Mgrade >= 80)
			count[1]++;
		else if (work->Mgrade <= 79 && work->Mgrade >= 70)
			count[2]++;
		else if (work->Mgrade <= 69 && work->Mgrade >= 60)
			count[3]++;
		else if (work->Mgrade < 60)
			count[4]++;
		work = work->next;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	for (int i1 = max; i1 > 0; i1--) {
		for (int i2 = 0; i2 < 5; i2++) {
			if (count[i2] >= i1) {
				printf("*	");
			}
			else
				printf("	");
		}
		printf("\n");
	}
	printf("100~90	89~80	79~70	69~60	60以下\n");
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void Egraph() {
	int count[5] = { 0 };
	int n = 1;
	int max = INT_MIN;
	st *work = p.next->next;
	while (work != NULL) {
		if (work->Egrade <= 100 && work->Egrade >= 90)
			count[0]++;
		else if (work->Egrade <= 89 && work->Egrade >= 80)
			count[1]++;
		else if (work->Egrade <= 79 && work->Egrade >= 70)
			count[2]++;
		else if (work->Egrade <= 69 && work->Egrade >= 60)
			count[3]++;
		else if (work->Egrade < 60)
			count[4]++;
		work = work->next;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	for (int i1 = max; i1 > 0; i1--) {
		for (int i2 = 0; i2 < 5; i2++) {
			if (count[i2] >= i1) {
				printf("*	");
			}
			else
				printf("	");
		}
		printf("\n");
	}
	printf("100~90	89~80	79~70	69~60	60以下\n");
	while (n) {
		printf("按0退出。\n");
		scanf("%d", &n);
		system("cls"); return;
	}
}
void graphUI() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.按语文成绩      2.按数学成绩      *\n");
		printf("*   3.按英语成绩                        *\n");
		printf("*                     0.退出            *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:Cgraph(); break;
		case 2:Mgraph(); break;
		case 3:Egraph(); break;
		case 0: {system("cls"); return; }
		}
	}
}
void informationUI() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.百分比            2.统计图        *\n");
		printf("*                       0.退出          *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:percentUI(); break;
		case 2:graphUI(); break;
		case 0: {system("cls"); return; }
		}
	}
}
void statisticsUI() {
	while (1) {
		printf("*****************************************\n");
		printf("*   1.最高分            2.最低分        *\n");
		printf("*   3.平均分            4.统计信息      *\n");
		printf("*                       0.退出          *\n");
		printf("*****************************************\n");
		int n;
		printf("请输入功能序号：");
		scanf("%d", &n);
		system("cls");
		switch (n) {
		case 1:MAX(); break;
		case 2:MIN(); break;
		case 3:averageUI(); break;
		case 4:informationUI(); break;
		case 0: {system("cls"); return; }
		}
	}
}
void del(st *work, st *workpr) {
	if (work == end)
		end = workpr;
	workpr->next = work->next;
	free(work);
	printf("删除成功！\n按0退出。");
	int n = 1;
	while (n) {
		scanf("%d", &n);
		return;
	}
}
void find() {
	int n = 1;
	int flag = 0;
	if (p.num == 0) {
		printf("抱歉！目前学生数据为空。\n按0退出");
		while (n) {
			scanf("%d", n);
			return;
		}
	}
	st *workpr = p.next;
	st *work = p.next->next;
	puts("请输入要查询学生的姓名：");
	char findname[10];
	scanf("%s", findname);
	while (n) {
		if (!strcmp(findname, work->name)) {
			printf("总分%d，语文%d，数学%d，英语%d\n", work->total, work->Cgrade, work->Mgrade, work->Egrade);
			printf("删除该学生数据请按1，返回请按0.\n");
			scanf("%d", &flag);
			if (flag == 1)
				del(work, workpr);
			system("cls");
			return;
		}
		workpr = work;
		work = work->next;
		if (work == NULL) {
			printf("该学生无数据！\n按0退出。");
			scanf("%d", &n);
			system("cls");
			return;
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
		case 2:statisticsUI(); break;
		case 3:sortUI(); break;
		case 4:find(); break;
		case 0:return 0;
		}
	}
}