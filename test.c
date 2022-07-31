#include<stdio.h>
int student(int a,int r,char choice)
{  	
	int age,rollno;
    printf("jack :");
    scanf("%c",&choice);
    printf("%c",choice);

}
int main()
{
	int x,y;
    char choice;	
	printf("Enter your age: ");
	scanf("%d",&x);//12	
	printf("Enter your roll No:");
	scanf("%d",&y);//1	
	student(x,y,choice);
	return 0;
}