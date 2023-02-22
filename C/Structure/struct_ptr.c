#include<stdio.h>
#include<string.h>

struct Student{
	char name[30];
	int roll_no;
	
};

int main()
{ 
	
	struct Student stud = {"sam",101};
  struct Student *ptr;
  ptr = &stud;

  printf("%s %d\n",stud.name,stud.roll_no); // sam 101

  printf("%s %d\n",ptr->name,ptr->roll_no); // sam 101
	
	strcpy(ptr->name,"raj");
	
	printf("%s %d\n",stud.name,stud.roll_no); // raj  101
	
	return 0;
}

