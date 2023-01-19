#include<stdio.h>
#include<string.h>
#define row 4*20
#define col 50
#define hsize 21
int main()
{
    char  confrm, menuoption;
    char  sname[col], gobacktomenu;
    int  i, j, p = 16, found, call;


    int call_1, c = 5, his_1, time_1, timet = 3;


    int i_3;


    int q;
    int* ptr = &q;

    char chistory[hsize][col] = { "","Shibly","Samman","Nezoom","Sazzad" };
    char cphistory[hsize][col] = { "","+8801999443835","+8801799803434","+8801879201862","+8801738266348" };

    char person[row][col] = { "Shibly","+8801999443835","mohammad15-4258@diu.edu.bd","Nabinagar, Savar, Dhaka",
                            "Samman","+8801799803434","samman15-1447@diu.edu.bd","Banani 2, Dhaka 1212, Dhaka",
                            "Nezoom","+8801879201862","molla15-4269@diu.edu.bd","Demra, Dhaka",
                            "Sazzad","+8801738266348","hossain15-4305@diu.edu.bd","Jashore, Khulna" };

    char qd[10][col] = { "","Shibly","Samman","Nezoom","Sazzad" };



    //---------------------------------------------------------------------------------------------------------------------------------------
    for (;;)
    {
        system("cls");
        printf("\n");
        printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\xdb                                                                        \xdb\n");
        printf("\t\t\t\xdb \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb   \xdb\xdb\xdb\xdb   \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb   \xdb   \xdb \xdb\n");
        printf("\t\t\t\xdb \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb\xdb    \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb  \xdb  \xdb\n");
        printf("\t\t\t\xdb \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb\n");
        printf("\t\t\t\xdb \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb  \xdb  \xdb  \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb  \xdb    \xdb  \xdb\xdb    \xdb\n");
        printf("\t\t\t\xdb \xdb       \xdb    \xdb  \xdb    \xdb  \xdb   \xdb \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb\n");
        printf("\t\t\t\xdb \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb\xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb  \xdb  \xdb\n");
        printf("\t\t\t\xdb \xdb       \xdb    \xdb   \xdb\xdb\xdb\xdb   \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb   \xdb   \xdb \xdb\n");
        printf("\t\t\t\xdb                                                                        \xdb\n");
        printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t\t\t    ===============\n");
        printf("\t\t\t\t\t\t      APPLICATION  \n");
        printf("\t\t\t\t\t\t    ===============\n");


        printf("\n\n");
        printf("\xdb\xdb 1. Add new contact\n\n");                  
        printf("\xdb\xdb 2. Delete a contact\n\n");                 
        printf("\xdb\xdb 3. Edit a contact\n\n");                   
        printf("\xdb\xdb 4. Search contacts\n\n");                  
        printf("\xdb\xdb 5. Show all contacts\n\n");                
        printf("\xdb\xdb 6. Call history\n\n");                     
        printf("\xdb\xdb 7. Quick dial\n\n");                       
        printf("\xdb\xdb 0. Exit application\n\n\n");

        printf("Select a number from 0 to 7:\n\n");

        scanf(" %c", &menuoption);
        switch (menuoption)
        {


        case '0':
            system("cls");
            printf("\n\n\n\n\n\n\n\n");
            printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
            printf("\t\t\t\xdb                                                                        \xdb\n");
            printf("\t\t\t\xdb  \xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb    \xdb   \xdb\xdb\xdb   \xdb     \xdb \xdb    \xdb      \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb  \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb  \xdb   \xdb  \xdb\xdb    \xdb \xdb   \xdb        \xdb   \xdb  \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb \xdb   \xdb \xdb  \xdb          \xdb \xdb   \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb  \xdb  \xdb \xdb\xdb\xdb            \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb   \xdb \xdb \xdb  \xdb           \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb    \xdb\xdb \xdb   \xdb          \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb     \xdb \xdb    \xdb         \xdb     \xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb     \xdb\n");
            printf("\t\t\t\xdb                                                                        \xdb\n");
            printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
            printf("\n\n\n\n\n\n\n\n\n\n");
            return 0;









        case '1': //----------------------------------------------------adding contact---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                        Add new contact\n");
            printf("                                                  ========================\n");

            for (;;)
            {
                found = 0;
                printf("\n\nEnter name\t\t: ");
                scanf("%s", &person[p]);
                for (i = 0; i < p; i += 4)
                {
                    if (!strcmp(person[p], person[i]))
                    {
                        found = 1;
                        printf("\n\nThere is an existing contact with the same name. Try a different name.\n");
                    }
                }
                if (found == 0)
                    break;
            }
            printf("\nEnter phone number\t: ");
            scanf("%s", &person[p + 1]);
            printf("\nEnter email address\t: ");
            scanf("%s", &person[p + 2]);
            printf("\nEnter address\t\t: ");
            scanf("%s", &person[p + 3]);

            printf("\n\n");
            printf("Contact info:\n");
            printf("=============\n\n");
            printf("Name\t\t: %s\n", person[p]);
            printf("Phone number\t: %s\n", person[p + 1]);
            printf("Email address\t: %s\n", person[p + 2]);
            printf("Address\t\t: %s\n", person[p + 3]);

            printf("\n\nSave contact? [Y/N?] : ");
            scanf(" %c", &confrm);
            if (confrm == 'y' || confrm == 'Y')
            {
                p += 4;
                printf("                                                  ========================\n");
                printf("                                                        Contact saved \n");
                printf("                                                  ========================\n");
                printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
                scanf(" %c", &gobacktomenu);
                break;
            }
            else if (confrm == 'n' || confrm == 'N')
            {
                person[p][0] = 0;
                printf("                                                  ========================\n");
                printf("                                                      Contact not saved \n");
                printf("                                                  ========================\n");
                printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
                scanf(" %c", &gobacktomenu);
                break;
            }
            else
            {
                p += 4;
                printf("\n\n\n");
                break;
            }









        case '2'://----------------------------------------------------deleting contact---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                        Delete contact\n");
            printf("                                                  ========================\n");
            printf("\n\nEnter name\t\t: ");
            scanf("%s", &sname);
            for (i = 0; i < p; i += 4)
            {
            	found=0;
                if (!strcmp(sname, person[i]))
                {
                	found=1;
                    printf("\n\n");
                    printf("                                                  ========================\n");
                    printf("                                                        Contact found \n");
                    printf("                                                  ========================\n");
                    printf("Delete this contact? [Y/N] : ");
                    scanf(" %c", &confrm);
                    if (confrm == 'y' || confrm == 'Y')
                    {
                        for (i_3 = i; i_3 < p; i_3++)
                        {
                            strcpy(person[i_3], person[i_3 + 4]);
                        }

                        printf("\n\n");
                        printf("                                                  ========================\n");
                        printf("                                                       Contact deleted\n");
                        printf("                                                  ========================\n");
                        p -= 4;
                    }
                    break;
                }
            }
            if(found==0)
			{
				printf("\n\n");
				printf("                                                  ========================\n");
				printf("                                                      Contact not found\n");
				printf("                                                  ========================\n");
			}


            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;



















        case '3'://----------------------------------------------------edit contact---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                         Edit contact\n");
            printf("                                                  ========================\n");
            printf("\n\nEnter the contact name\t\t: ");
            scanf("%s", &sname);
            if (p == 0)
            {
                printf("\n\n");
                printf("                                                  ========================\n");
                printf("                                                      No saved contacts \n");
                printf("                                                  ========================\n");
            }
            for (i = 0; i < p; i += 4)
            {
                found = 0;
                if (!strcmp(sname, person[i]))
                {
                    found = 1;
                    printf("\n\n");
                    printf("                                                  ========================\n");
                    printf("                                                        Contact found \n");
                    printf("                                                  ========================\n");
                    printf("\nChoose what to edit\n\n");
                    printf("\n1. Edit name\n");
                    printf("\n2. Edit phone number\n");
                    printf("\n3. Edit email address\n");
                    printf("\n4. Edit address\n\n");
                    scanf(" %c", &menuoption);
                    switch (menuoption)
                    {
                    case '1':
                        printf("Enter new name: ");
                        scanf("%s", person[i]);
                        printf("\n\n");
                        printf("                                                  ========================\n");
                        printf("                                                       Contact updated \n");
                        printf("                                                  ========================\n");
                        break;

                    case '2':
                        printf("Enter phone number: ");
                        scanf("%s", person[i + 1]);
                        printf("\n\n");
                        printf("                                                  ========================\n");
                        printf("                                                       Contact updated \n");
                        printf("                                                  ========================\n");
                        break;
                    case '3':
                        printf("Enter email addres: ");
                        scanf("%s", person[i + 2]);
                        printf("\n\n");
                        printf("                                                  ========================\n");
                        printf("                                                       Contact updated \n");
                        printf("                                                  ========================\n");
                        break;
                    case '4':
                        printf("Enter address: ");
                        scanf("%s", person[i + 3]);
                        printf("\n\n");
                        printf("                                                  ========================\n");
                        printf("                                                       Contact updated \n");
                        printf("                                                  ========================\n");
                        break;
                    default:
                        printf("Input must be between 1 to 4\n");
                        break;
                    }

                }

            }
            if (found == 0)
            {
                printf("\n\n");
                printf("                                                  ========================\n");
                printf("                                                      Contact not found \n");
                printf("                                                  ========================\n");
                break;
            }

            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;
















        case '4'://----------------------------------------------------search contact---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                        Search contact\n");
            printf("                                                  ========================\n");
            printf("\n\nEnter name\t\t: ");
            scanf("%s", &sname);
            for (i = 0; i < p; i += 4)
            {
                found = 0;
                if (!strcmp(sname, person[i]))
                {
                    found = 1;
                    printf("\n\n");
                    printf("Name\t\t: %s\n", person[i]);
                    printf("Phone number\t: %s\n", person[i + 1]);
                    printf("Email address\t: %s\n", person[i + 2]);
                    printf("Address\t\t: %s\n", person[i + 3]);

                    printf("\nEnter 1 to call: ");
                    scanf(" %d", &call_1);
                    if (call_1 == 1)
                    {
                        printf("\nCalling %s . . .", person[i]);
                        strcpy(chistory[c], person[i]);
                        strcpy(cphistory[c], person[i + 1]);
                        c++;
                        timet += 1;
                    }
                    break;
                }
            }
            if (found == 0)
            {
                printf("\n\n");
                printf("                                                  ========================\n");
                printf("                                                      Contact not found \n");
                printf("                                                  ========================\n");
            }

            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;















        case '5'://----------------------------------------------------show all contacts---------------------------------------------------------------------
            system("cls");
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                         Contact list \n");
            printf("                                                  ========================\n");
            printf("\n\n========================================================================================================================\n\n");
            if (p == 0)
            {
                printf("\n\n");
                printf("                                                  ========================\n");
                printf("                                                      No saved contacts \n");
                printf("                                                  ========================\n");
            }

            for (i = 0; i < p; i += 4)
            {
                printf("Name\t\t: %s\n", person[i]);
                printf("Phone number\t: %s\n", person[i + 1]);
                printf("Email address\t: %s\n", person[i + 2]);
                printf("Address\t\t: %s\n", person[i + 3]);
                printf("\n========================================================================================================================\n\n");
            }


            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;











        case '6'://----------------------------------------------------call history---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                        Call history\n");
            printf("                                                  ========================\n");
            his_1 = 1;
            time_1 = timet;
            printf("%d",timet);
            printf("\t Name\t\t      Phone\t\t  Time\n");
            printf("\t======\t\t==============\t\t========\n");
            for (i = c - 1; i >= 1; i--)
            {
                printf("%d.\t%s\t\t%-24s10:%02d AM\t\t\n", his_1, chistory[i], cphistory[i], time_1);
                time_1 -= 1;
                his_1++;
            }
            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;










        case '7'://----------------------------------------------------quick dial---------------------------------------------------------------------
            system("cls");
            printf("                                                  ========================\n");
            printf("                                                          Quick dial\n");
            printf("                                                  ========================\n");
            printf("\n\nDigit\t     Name\t\t Phone\n");
            printf("=====\t   ========\t   ================\n");
            for (i = 1; i < 10; i++)
            {
                found = 0;
                for (j = 0; j < p; j += 4)
                {
                    if (!(strcmp(qd[i], person[j])))
                    {
                        printf("[%d]\t    %-16s%-20s\n\n", i, qd[i], person[j + 1]);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("[%d]\t   [Empty]\t    [Empty]\n\n", i);
                }
            }
            printf("\n\n");
            printf("\xdb\xdb 1. Assign a new quick dial\n\n");
            printf("\xdb\xdb 2. Call a number from above\n\n");
            printf("\xdb\xdb Enter any other key to exit quick dial\n\n");
            printf("Enter choice: ");
            scanf(" %c", &menuoption);
            printf("\n");
            switch (menuoption)
            {
            case '1':
                printf("Choose a number between 1 to 9 to assign quick dial: ");
                scanf("%d", &*ptr);
                if (*ptr < 10 && *ptr>0)
                {
                    found = 0;
                    printf("\n\nEnter contact name to assign: ");
                    scanf("%s", &sname);
                    for (i = 0; i < p; i += 4)
                    {
                        if (!(strcmp(sname, person[i])))
                        {
                            found = 1;
                            strcpy(qd[*ptr], person[i]);
                            printf("                                                  ========================\n");
                            printf("                                                     Quick dial updated\n");
                            printf("                                                  ========================\n");
                            break;
                        }
                    }
                    if (found == 0)
                    {
                        printf("                                                  ========================\n");
                        printf("                                                      Contact not found\n");
                        printf("                                                  ========================\n");
                    }
                }
                break;

            case '2':

                printf("Enter quick dial digit to call: ");
                scanf("%d", &call);
                if (call > 0 && call < 10)
                {
                    for (i = 0; i < p; i += 4)
                    {
                        found = 0;
                        if (!(strcmp(qd[call], person[i])))
                        {
                            printf("\nCalling %s . . .\n", person[i]);
                            strcpy(chistory[c], person[i]);
                            strcpy(cphistory[c], person[i + 1]);
                            c++;
                            timet += 1;
                            found = 1;
                            break;
                        }
                    }
                    if (found == 0)
                    {
                        printf("                                                  ========================\n");
                        printf("                                                      Unassigned digit\n");
                        printf("                                                  ========================\n");
                    }
                }
                else
                {
                    printf("\n\nInvalid input\n");
                }
                break;

            default:
                break;
            }

            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
            break;
        default:
            printf("\n\n\nInvalid input. Input must be between 0 to 7\n");
            printf("\n\n========================================= [Enter any key go back to main menu] =========================================\n");
            scanf(" %c", &gobacktomenu);
        }



    }

    return 0;
}

