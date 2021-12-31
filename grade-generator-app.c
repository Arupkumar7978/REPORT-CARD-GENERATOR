#include<stdio.h>
#include<unistd.h>

int main ()
{
    setbuf(stdout, NULL);

    char name[30];
    int standard;
    char section;
    int math,science,english,hindi,social_science;
    int total_mark,full_mark=100,total=500;


    puts("---------------------------------------------------");
	puts("|=========== REPORT CARD GENERATOR APP ===========|");
	puts("---------------------------------------------------");

    printf("\t Jawahar Navodaya Vidyalaya\n");
    printf("\t    Annual Report Card\n");

    printf("\n");

    printf("Please Enter Student Name:");
            scanf("%[^\n]*c",&name);

    printf("Please Enter Standard:");
            scanf("%d",&standard);

        while ((getchar()) != '\n');

    printf("Please Enter Section(In Capital):");
            scanf("%c",&section);

    printf("\n\tPlease Wait ...\n");
    sleep(2);

    printf("\n\t**** STUDENT DETAILS ****\n");
        printf("NAME    : %s\n",name);
        printf("STANDARD: %d\n",standard);
        printf("SECTION : %c\n",section);

    printf("\n");

    printf("\tPlease Enter Marks \n");
            sleep(1);
    printf("Enter the mark for MATHMETICS    :");
            scanf("%d",&math);
    printf("Enter the mark for ENGLISH       :");
            scanf("%d",&english);
    printf("Enter the mark for HINDI         :");
            scanf("%d",&hindi);
    printf("Enter the mark for SCIENCE       :");
            scanf("%d",&science);
    printf("Enter the mark for SOCIAL SCIENCE:");
            scanf("%d",&social_science);
    total_mark= math + english + hindi + science + social_science ;

    if(total_mark <=0 || total_mark>=500)
            {
                printf("\n\tNO RESULT FOUND !!\n");
            }
    else{
    printf("\n");

    printf("\tPlease wait Your mark is Evaluating .... \n");
    sleep(3);

            printf("\n\t *** SUBJECT WISE MARKS ***\n");
            printf("  \n *SUBJECTS* \t\t *FULL MARK*\n");

            printf("\n");

            printf(" MATHMETICS    : %d         %d\n", math,full_mark);
            printf(" ENGLISH       : %d         %d\n", english,full_mark);
            printf(" HINDI         : %d         %d\n", hindi,full_mark);
            printf(" SCIENCE       : %d         %d\n", science,full_mark);
            printf(" SOCIAL SCIENCE: %d         %d\n", social_science,full_mark);
            printf("**************************************************\n");
            printf(" Mark Secured  : %d \t    %d\n",total_mark,total);

            printf("\n");


            if(total_mark >= 450 && total_mark <= 500)
                {
                    printf("Congrasts %s ! You Owned GRADE A.",name);
                }
                else if (total_mark >= 400 && total_mark <= 449)
                {
                    printf("Congrasts %s ! You Owned GRADE B.",name);
                }
                else if (total_mark >= 350 && total_mark <= 399)
                {
                    printf("Congrasts %s ! You Owned GRADE C.",name);
                }
                else if (total_mark >= 300 && total_mark <= 349)
                {
                    printf("Congrasts %s ! You Owned GRADE D.",name);
                }
                else if(total_mark >= 200 && total_mark <= 299)
                {
                    printf("Congrasts %s ! You Owned GRADE E.",name);
                }

            else if(total_mark>0 && total_mark <=199)
                {
                     printf("Congrasts %c ! You Owned GRADE F.",name);

                }

            printf("\n");
        }

        return 0;
}
