#include <stdio.h>
#include <string.h>
typedef struct diriving_agency
{

    char name[20];
    char licence_no[10];
    char route[14];
    int kms;

} dir;
int main()
{
    dir d1, d2, d3;

    d1.kms = 20;
    d2.kms = 23;
    d3.kms = 200;

    strcpy(d1.name, "Raj");
    strcpy(d2.name, "Ravi");
    strcpy(d3.name, "Kamal");

    strcpy(d1.licence_no, "JFKE15646");
    strcpy(d2.licence_no, "REYVI4523");
    strcpy(d3.licence_no, "HHD845IO3");

    strcpy(d1.route, "Bhestan road");
    strcpy(d2.route, "Udhna road");
    strcpy(d3.route, "Goa road");

    printf("Driver 1 name is %s \n", d1.name);
    printf("Driver 1 licence no is %s \n", d1.licence_no);
    printf("Driver 1 take route is %s \n", d1.route);
    printf("Driver 1 complete kms is %d \n \n \n \n \n", d1.kms);

    printf("Driver 2 name is %s \n", d2.name);
    printf("Driver 2 licence no is %s \n", d2.licence_no);
    printf("Driver 2 take route is %s \n", d2.route);
    printf("Driver 2 complete kms is %d \n \n \n \n \n", d2.kms);

    printf("Driver 3 name is %s \n", d3.name);
    printf("Driver 3 licence no is %s \n", d3.licence_no);
    printf("Driver 3 take route is %s \n", d3.route);
    printf("Driver 3 complete kms is %d \n \n \n \n \n", d3.kms);

    return 0;
}
