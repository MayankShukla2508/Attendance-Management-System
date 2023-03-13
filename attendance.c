#include <stdio.h>
#include<string.h>
char*uname[2]={"admin"},*password[2]={"admin123"},*tname[1]={"teacher"},*tpassword[1]={"teacher123"},*name[20],*pass[20];
char*sname[15]={"mahesh","srinu","maruthi","basha","kavya","keerthi","lavanya","pavan","mohmmad","sunny","charitha","somesh","aparna","zuveria","zendaya"};
char*spassword[15]={"mahesh99","srinu99","maruthi99","basha123","kavya@1","keerthi34","lavanya@33","pavan@32","mohmmad99","sunny@45","charitha23","somesh@467","aparna@1","zuveria30","zendaya@990"};
int dayp[20]={101,109,87,97,99,67,54,90,120,66,11,108,119,43,54},dayp1[1],daya1[1];
int daya[20]={19,11,33,23,21,53,66,30,0,54,109,12,1,77,66};
int c,d,n=0,i,num,num1,num2,a,e,f,m=0,z,x,y,o,u,v,t,l,p,b,r,k,g,h;
char *name1[20],*pass1[20],*name2[20],*pass2[20],sname1[10],spassword1[10],*name3[20],*pass3[20];
int main()
{
system("COLOR 74");

printf("\n\n\t\t ===============================================================================================   ");
printf("\n\t\t *                                         WELCOME                                             * ");
printf("\n\t\t *                                           TO                                                * ");
printf("\n\t\t *                               ATTENDENCE MANAGEMENT SYSTEM                                  * ");
printf("\n\t\t ===============================================================================================   ");
printf("\n\n\n\n\t\t\t\t\t\t press any key to continue ");
getch();
system("cls");
printf("\n\t Enter 1 for main menu : ");
printf("\n\t Enter 2 to exit :\n\t",z);
scanf("%d",&num);
r=1;
switch(num)
{
    case 1: printf("\n\n\t press any key to continue...");
    getch();
    system("cls");
    break;
    case 2: goto end;
    default :printf("\n\t Invalid");
    break;
}
menu :

switch(num)
{
    case 1: printf("\n\t ======= Main Menu =======");
            printf("\n\t 1) Admin Portal :");
            printf("\n\t 2) Teacher Portal :");
            printf("\n\t 3) Student Portal :");
            printf("\n\t 4) Exit : \n\t");
            scanf("%d",&num1);
            printf("\n\t press any key to continue... ");
            getch();
            system("cls");
            k=1;

            switch(num1)
            {
            case 1:
                admi:

                printf("\n\t user name : ");
                scanf("%s",name);
                printf("\n\t password : ");
                scanf("%s",pass);
                for(i=0;i<1;i++)
                {
                    c=strcmp(uname[i],name);
                    d=strcmp(password[i],pass);

                    admin_portal :

                    if(c==0 && d==0)
                    {
                         printf("\n\t ======== Admin Portal ========");
                         printf("\n\t 1) Search student by name :");
                         printf("\n\t 2) Add student :");
                         printf("\n\t 3) View all students :");
                         printf("\n\t 4) Exit : ");
                         scanf("%d",&a);
                        o=1;

                        switch(a)
                        {
                        case 1:
                                admin11 :

                                printf("\n\t Enter student name : ");
                                scanf("%s",name1);
                                printf("\n\t Enter student password : ");
                                scanf("%s",pass1);
                                for(i=0;i<15;i++)
                                {

                                    x=strcmp(sname[i],name1);
                                    y=strcmp(spassword[i],pass1);

                                    n=0;

                                    if(x==0 && y==0)
                                    {
                                        printf("\n\t Number of days present : %d",dayp[i]);
                                        printf("\n\t Number of days absent : %d",daya[i]);
                                        n=1;
                                        break;
                                    }
                                }

                                e=strcmp(sname1,name1);
                                f=strcmp(spassword1,pass1);

                                if(e==0 && f==0)
                                {
                                    printf("\n\t Days present : %d",*dayp1);
                                    printf("\n\t Days absent : %d",*daya1);
                                }
                                else if(n==0)
                                {
                                    printf("\n\t invalid..");
                                }
                                getch();
                                system ("cls");
                                goto admin_portal;
                                break;

                        case 2:
                                printf("\n\t student name :");
                                scanf("%s",sname1);
                                printf("\n\t student password :");
                                scanf("%s",spassword1);
                                printf("\n\t number of students present :");
                                scanf("%d",dayp1);
                                printf("\n\t number of days absent :");
                                scanf("%d",daya1);
                                printf("\n\n\n\n\n\n\t\t\t\t\t press any key to continue....");
                                getch();
                                system("cls");
                                goto admin_portal;
                                break;

                        case 3:
                                    for(i=0;i<15;i++)
                                    {
                                    printf("\n\t student name : %s ",sname[i]);
                                    printf("\n\t number of days present : %d",dayp[i]);
                                    printf("\n\t number of days absent : %d\n",daya[i]);
                                    }
                                    printf("\n\t student name : %s ",sname1);
                                    printf("\n\t number of days present : %d",*dayp1);
                                    printf("\n\t number of days absent : %d\n",*daya1);
                                getch();
                                system("cls");
                                goto admin_portal;
                                break;
                        case 4: getch();
                                system("cls");
                                goto menu;
                                break;
                        default: printf("\n Invalid credentials... ");
                        break;
                        }
                    }
                    if(o==0)
                    {
                        printf("\n\t invalid credentials...");
                        goto admi;
                    }
                }
                break;

            case 2:
                    tp :

                    printf("\n\t enter teacher name:");
                    scanf("%s",name);
                    printf("\n\t enter password:");
                    scanf("%s",pass);

                    teacher_portal:

                    for(i=0;i<1;i++)
                    {

                        u=strcmp(tname[i],name);
                        v=strcmp(tpassword[i],pass);

                        tp1 :

                        if(u==0 && v==0)
                        {
                         printf("\n\t ====== teacher portal=====");
                         printf("\n\t 1) Search student by name :");
                         printf("\n\t 2) View all students :");
                         printf("\n\t 3) Exit :");
                         scanf("%d",&t);

                            switch(t)
                            {
                            case 1:
                                    printf("\n\t ====== teacher portal=====");
                                    printf("\n\t enter student name:");
                                    scanf("%s",name2);
                                    printf("\n\t student password:");
                                    scanf("%s",pass2);
                                    b=1;

                                    for(i=0;i<15;i++)
                                    {

                                        l=strcmp(sname[i],name2);
                                        p=strcmp(spassword[i],pass2);

                                        if(l==0 && p==0)
                                        {
                                            printf("\n\t number of days present:%d",dayp[i]);
                                            printf("\n\t number of days absent:%d",daya[i]);
                                            n=1;
                                            break;
                                        }
                                    }

                                e=strcmp(sname1,name2);
                                f=strcmp(spassword1,pass2);

                                if(e==0 && f==0)
                                {
                                    printf("\n\t Days present : %d",*dayp1);
                                    printf("\n\t Days absent : %d",*daya1);

                                }
                                else if(n==0)
                                {
                                    printf("\n\t invalid..");
                                }
                                    getch();
                                    system("cls");
                                    goto teacher_portal;
                                    break;

                            case 2:
                                    for(i=0;i<15;i++)
                                    {
                                        printf("\n\t student name:%s ",sname[i]);
                                        printf("\n\t number of days present:%d",dayp[i]);
                                        printf("\n\t number of days absent:%d\n",daya[i]);
                                    }
                                    printf("\n\t student name : %s ",sname1);
                                    printf("\n\t number of days present : %d",*dayp1);
                                    printf("\n\t number of days absent : %d\n",*daya1);
                                    getch();
                                    system("cls");
                                    goto teacher_portal;
                                    break;

                            case 3:
                                    if(b==1)
                                    {
                                        printf("\n\t THANK YOU...");
                                    }
                                    else if(b!=1)
                                    {
                                        printf("\n\t \n\n\n\n press any key to continue...");
                                    }
                                    getch();
                                    system("cls");
                                    goto menu;
                                    break;
                            default : printf("\n\t invalid credentials..");
                                      break;
                        }
                        }
                        else
                        {
                            printf("\n\t invalid credentials...");
                            goto tp;
                        }
                    }
                    break;

            case 3:
                    sp :

                    printf("\n\t====== student portal ====== ");
                    printf("\n\t student name : ");
                    scanf("%s",name3);
                    printf("\n\t student password : ");
                    scanf("%s",pass3);

                    for(i=0;i<15;i++)
                    {

                        g=strcmp(sname[i],name3);
                        h=strcmp(spassword[i],pass3);

                        if(g==0 && h==0)
                        {
                            printf("\n\t number of days present:%d",dayp[i]);
                            printf("\n\t number of days absent:%d \n",daya[i]);n=1;
                            break;
                        }
                    }
                    getch();
                    system("cls");
                    goto menu;
                                e=strcmp(sname1,name1);
                                f=strcmp(spassword1,pass1);

                                if(e==0 && f==0)
                                {
                                    printf("\n\t Days present : %d",*dayp1);
                                    printf("\n\t Days absent : %d",*daya1);

                                }
                                else if(n==0)
                                {
                                    printf("\n\t invalid..");

                                }break;


                            getch();
                            system("cls");
                            goto menu;
                            break;

            case 4: goto end;
                    break;

            default: printf("\n invalid");
                    break;
            }
            break;

    case 2: goto end;
            break;

    default : printf("\n THANK YOU.. ");
              break;
}

end :
printf("\n\t THANK YOU....1");
return 0;
}
