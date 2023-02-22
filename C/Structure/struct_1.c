#include<stdio.h>
#include<string.h>

struct Student{
	char name[30];
	int roll_no;
};

int main()
{
  struct Student s1 = {"Sam",101};
  printf("%s , %d\n",s1.name,s1.roll_no);  // Sam , 101
  
  struct Student s2;
  strcpy(s2.name,"Raj");
  s2.roll_no = 102;
  
  printf("%s , %d\n",s2.name,s2.roll_no);  // Raj , 102
  
  return 0;
}



