/******************************************************************************

student struct

*******************************************************************************/
#include <stdio.h>
struct student
{
    char name[20];
    char place[15];
    int class;
};
int main()
{
    int i,size;
    struct student s1[5];
    printf("enter the number of students:");
    scanf("%d",&size);
    printf("enter the details of student:");
    for(i=0;i<size;i++)
    {
        printf("enter name: ");
        scanf("%s",s1[i].name);
        printf("enter place:");
        scanf("%s",s1[i].place);
        printf("enter class:");
        scanf("%d",&s1[i].class);
    }
    printf("students information are:");
    for(i=0;i<5;i++)
    {
        printf("name:%s",s1[i].name);
        printf("place:%s",s1[i].place);
        printf("class:%d",s1[i].class);
    }
    printf("\n");
    return 0;
}
