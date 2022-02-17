#include <iostream>
#include "conio2.h"
#include "quiz.h"

using namespace std;

int main()
{
    int type,c,choice;

    textcolor(LIGHTGREEN);
    for(int i=1;i<=80;i++)
        cout<<"*";
    textcolor(LIGHTRED);
    gotoxy(32,2);
    cout<<"Quiz Application";
    gotoxy(1,3);
    textcolor(LIGHTGREEN);
    for(int i=1;i<=80;i++)
        cout<<"*";
    gotoxy(20,10);
    textcolor(YELLOW);
    cout<<"WELCOME TO TECH TEST-QUIZ APPLICATION";
    gotoxy(20,14);
    textcolor(LIGHTGREEN);
    cout<<"TEST YOUR SKILLS ! IMPORVE YOUR KNOWLEDGE !";
    gotoxy(1,20);
    textcolor(WHITE);
    cout<<"Press Any Key To Continue..."<<endl;
    getch();

    Admin::create_admin("uadmin","abc","sheetal");
    do{
        clrscr();
        textcolor(LIGHTGREEN);
        for(int i=1;i<=80;i++)
            cout<<"*";
        textcolor(LIGHTRED);
        gotoxy(32,2);
        cout<<"Quiz Application";
        gotoxy(1,3);
        textcolor(LIGHTGREEN);
        for(int i=1;i<=80;i++)
            cout<<"*";
        gotoxy(58,4);
        textcolor(WHITE);
        cout<<"Press 0 to Exit/Go Back";
        gotoxy(1,8);
        textcolor(YELLOW);
        for(int i=1;i<=80;i++)
            cout<<"*";
        gotoxy(1,17);
        textcolor(YELLOW);
        for(int i=1;i<=80;i++)
            cout<<"*";
        gotoxy(32,10);
        cout<<"1. ADMIN";
        gotoxy(32,12);
        cout<<"2. STUDENT";
        gotoxy(32,14);
        cout<<"Select Your Role: ";
        textcolor(WHITE);
        cin>>type;
        if(type==0){
            break;
        }
        cin.ignore();
        if(type==1){
            //Admin options

            Admin adminobj;
            do{
                c=adminobj.input();
                if(c==0)
                {
                    gotoxy(30,14);
                    textcolor(LIGHTRED);
                    cout<<"Login Cancelled";
                    gotoxy(1,20);
                    textcolor(WHITE);
                    cout<<"Press any key to continue";
                    getch();
                    break;
                }
                // check user Exist();

                c=adminobj.checkUserExists("Admin");
                if(c==1){
                    gotoxy(28,18);
                    textcolor(LIGHTGREEN);
                    cout<<"Login Accept";
                    gotoxy(28,20);
                    cout<<"Welcome "<<adminobj.getName();
                    gotoxy(28,22);
                    textcolor(WHITE);
                    cout<<"Press any key to continue";
                getch();
                while(1){
                    clrscr();
                    textcolor(LIGHTGREEN);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    textcolor(LIGHTRED);
                    gotoxy(32,2);
                    cout<<"Quiz Application";
                    gotoxy(1,3);
                    textcolor(LIGHTGREEN);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    gotoxy(34,6);
                    textcolor(LIGHTGREEN);
                    cout<<"ADMIN MENU"<<endl;
                    gotoxy(1,7);
                    textcolor(YELLOW);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    textcolor(YELLOW);
                    gotoxy(32,8);
                    cout<<"1. Add Question";
                    gotoxy(32,9);
                    cout<<"2. Add Student";
                    gotoxy(32,10);
                    cout<<"3. view Question";
                    gotoxy(32,11);
                    cout<<"4. view student";
                    gotoxy(32,12);
                    cout<<"5. Remove Question";
                    gotoxy(32,13);
                    cout<<"6. Remove Student";
                    gotoxy(32,14);
                    cout<<"7. Exit";
                    gotoxy(32,16);
                    cout<<"Enter Choice: ";
                    textcolor(WHITE);
                    cin>>choice;
                    switch(choice)
                    {
                    case 1:
                        clrscr();
                        adminobj.addQuestion();

                        break;
                    case 2:
                        clrscr();
                        adminobj.addStudent();
                        break;
                    case 3:
                        clrscr();
                        adminobj.viewQuestion();
                        break;
                    case 4:
                        clrscr();
                        adminobj.viewStudent();
                        break;
                    case 5:
                        clrscr();
                        adminobj.removeQuestion();
                        break;
                    case 6:
                        clrscr();
                        adminobj.removeStudent();
                        break;
                    case 7:
                        break;
                    default:
                        textcolor(LIGHTRED);
                        gotoxy(32,18);
                        cout<<"Wrong choice. Try Again";
                        getch();
                    }
                    if(choice==7)
                    break;

                }
            }

        }while(c==0);
        }
        else if(type==2){
            //student options
            Student studentObj;
            do{
                c=studentObj.input();
                if(c==0)
                {
                    gotoxy(30,14);
                    textcolor(LIGHTRED);
                    cout<<"Login Cancelled";
                    gotoxy(1,20);
                    textcolor(WHITE);
                    cout<<"Press any key to continue";
                    getch();
                    break;
                }
                // check user Exist();

                c=studentObj.checkUserExists("student");
                if(c==1){
                    gotoxy(28,18);
                    textcolor(LIGHTGREEN);
                    cout<<"Login Accept";
                    gotoxy(28,20);
                    cout<<"Welcome "<<studentObj.getName();
                    gotoxy(28,22);
                    textcolor(WHITE);
                    cout<<"Press any key to continue";
                getch();
                while(1){
                    clrscr();
                    textcolor(LIGHTGREEN);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    textcolor(LIGHTRED);
                    gotoxy(32,2);
                    cout<<"Quiz Application";
                    gotoxy(1,3);
                    textcolor(LIGHTGREEN);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    gotoxy(34,6);
                    textcolor(LIGHTGREEN);
                    cout<<"STUDENT MENU"<<endl;
                    gotoxy(1,7);
                    textcolor(YELLOW);
                    for(int i=1;i<=80;i++)
                        cout<<"*";
                    textcolor(YELLOW);
                    gotoxy(32,9);
                    cout<<"1. Start Quiz";
                    gotoxy(32,10);
                    cout<<"2. View Performence";
                    gotoxy(32,11);
                    cout<<"3. Exit";
                    gotoxy(32,13);
                    cout<<"Enter Choice: ";
                    textcolor(WHITE);
                    cin>>choice;
                    switch(choice)
                    {
                    case 1:
                        clrscr();
                        studentObj.quiz();
                        break;
                    case 2:
                        clrscr();
                        studentObj.viewPerformence();
                        break;
                    case 3:
                        break;
                    default:
                        textcolor(LIGHTRED);
                        gotoxy(32,18);
                        cout<<"Wrong choice. Try Again";
                        getch();
                    }
                    if(choice==3)
                    break;
                }
            }

        }while(c==0);
        }
        else{
            gotoxy(30,14);
            cout<<"\t\t\t\t\t\t\t";
            gotoxy(32,14);
            textcolor(LIGHTRED);
            cout<<"Invalid User Type!";
            getch();
        }

        getch();
    }while(1);

    return 0;
}
