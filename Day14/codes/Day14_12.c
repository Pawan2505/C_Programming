#include <stdio.h>
//Global declaration
struct emp // Blueprint
{
    int empno;     //4 byte
    char name[20]; // 20 byte
    double salary; // 8 byte
};
void accept_emp(struct emp a[]);
void print_emp(struct emp a[]); 
int main()
{

    struct emp arr[3];
    accept_emp(arr); // base address
    print_emp(arr);  // base address

    return 0;
}
void print_emp(struct emp a[])
{
    int i;
    for (i = 0; i < 3; i++)
        printf("%d %s %.2lf\n", a[i].empno, a[i].name, a[i].salary);
}
void accept_emp(struct emp a[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter empid name and salary");
        scanf("%d%s%lf", &a[i].empno, a[i].name, &a[i].salary);
    }
}