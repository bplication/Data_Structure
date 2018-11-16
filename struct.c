#include <stdio.h>


struct student{
	
	char name[20];
	int age;
	int score;
	struct student* friend;
};

typedef struct student STD;

int main(){
	
	struct student s1 = {"choi",25,100};
	STD s2 = {"song",23,90};
	s1.friend = &s2;
	s2.friend = &s1;

	printf("stduent name : %s\n"	,s1.name);
	printf("stduent age: %d\n"	,s1.age);
	printf("stduent score: %d\n"	,s1.score);
	printf("stduent friend name : %s\n"	,s1.friend->name);
//	printf("stduent friend name : %s\n"	,((*(s1.friend)).name);
	printf("\n");

	printf("stduent name : %s\n"	,s2.name);
	printf("stduent age: %d\n"	,s2.age);
	printf("stduent score: %d\n"	,s2.score);
	printf("\n");
//	struct student s1;
//	s1.score  = 120;
	return 0;
}
