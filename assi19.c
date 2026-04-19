
#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    char gender[10];
    char designation[50];
    int age;
    char doj[20];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n,i;
    int male=0,female=0,highSalary=0,asstManager=0;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
{
        printf("\nEnter details of employee %d\n",i+1);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Gender: ");
        scanf("%s",e[i].gender);

        printf("Designation: ");
        scanf("%s",e[i].designation);

        printf("Age: ");
        scanf("%d",&e[i].age);

        printf("Date of Joining: ");
        scanf("%s",e[i].doj);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
}

    for(i=0;i<n;i++){
     if(strcmp(e[i].gender,"male")==0)
            male++;
     else
            female++;

     if(e[i].salary > 10000)
            highSalary++;

    if(strcmp(e[i].designation,"Asst\nManager")==0)
            asstManager++;
 }

    printf("\nTotal employees = %d",n);
    printf("\nMale employees = %d",male);
    printf("\nFemale employees = %d",female);
    printf("\nEmployees with salary > 10000 = %d",highSalary);
    printf("\nEmployees with designation AsstManager = %d",asstManager);

    return 0;
}
