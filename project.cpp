#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

struct student
{
    string id;
    string fname;
    string lname;
    string Registration;
    string classes;
} studentData;

struct teacher
{
    string id;
    string fst_name;
    string lst_name;
    string qualification;

    string pay;
    string subj;
} tech[50];

int main()
{

    int i = 0, j;
    char choice;
    string find;
    string srch;
    string username;
    string password;

    while (1)
    {

        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout << "\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout << "\n\n\t\t\tMAIN SCREEN\n\n";
        cout << "Enter your choice: " << endl;
        cout << "1.Students information" << endl;
        cout << "2.Teacher information" << endl;
        cout << "3.Exit program" << endl;
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            
            cin >> choice;
        }
        switch (choice)
        {

        case '1':
        {
            cout << "Enter the username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            if (username == "admin" && password == "12345")
            {

                cout << "You are Login Now!";
            }
            else
            {
                cout << "Invalid username or password! " << endl;
                break;
            }

            while (1)
            {
                system("cls");

                cout << "\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
                cout << "Enter your choice: " << endl;
                cout << "1.Create new entry\n";
                cout << "2.Find and display entry\n";
                cout << "3.Jump to main\n";
                cin >> choice;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    
                    cin >> choice;
                }

                switch (choice)

                {
                case '1':
                {
                    ofstream f1("student.txt", ios::app);

                    for (i = 0; choice != 'n'; i++)
                    {

                        if ((choice == 'y') || (choice == 'Y') || (choice == '1'))
                        {
                            cout << "Enter Student ID: ";
                            cin >> studentData.id;
                            cout << "Enter First name: ";
                            cin >> studentData.fname;
                            cout << "Enter Last name: ";
                            cin >> studentData.lname;
                            cout << "Enter Registration number: ";
                            cin >> studentData.Registration;
                            cout << "Enter class: ";
                            cin >> studentData.classes;

                            f1 << studentData.id << endl
                               << studentData.fname << endl
                               << studentData.lname << endl
                               << studentData.Registration << endl
                               << studentData.classes << endl;
                            cout << "Do you want to enter data: ";
                            cout << "Press Y for Continue and N to Finish:  ";
                            cin >> choice;
                            while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore(1000, '\n');
                                
                                cin >> choice;
                            }
                        }
                    }
                    f1.close();
                }
                    continue;

                case '2':
                {
                    ifstream f2("student.txt");

                    cout << "Enter Student ID to be displayed: ";
                    cin >> find;
                    
                    cout << endl;
                    int notFound = 0;
                    for (j = 0; (j < i) || (!f2.eof()); j++)
                    {

                        getline(f2, studentData.id);

                        if (studentData.id == find)
                        {
                            notFound = 1;
                            cout << "ID: " << studentData.id << endl;
                            cout << "First Name: " << studentData.fname << endl;
                            cout << "Last Name: " << studentData.lname << endl;

                            cout << "Registration No number: " << studentData.Registration << endl;
                            getline(f2, studentData.Registration);

                            cout << "Class: " << studentData.classes << endl
                                 << endl;
                            getline(f2, studentData.classes);
                        }
                    }

                    if (notFound == 0)
                    {

                        cout << "No Record Found" << endl;
                    }
                    f2.close();
                    cout << "Press any  key two times  to proceed";
                    getch();
                    getch();
                    
                }
                    continue;

                case '3':
                {
                    break;
                }
                }

                break;
            }
            continue;
        }

        case '2':
        {
            cout << "Enter the username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            if (username == "admin" && password == "12345")
            {

                cout << "You are Login Now!";
            }
            else
            {
                cout << "Invalid username or password! " << endl;
                break;
            }

            while (1)
            {
                system("cls");

                cout << "\t\t\tTEACHERS INFORMATION AND BIODATA SECTION\n\n\n";
                cout << "Enter your choice: " << endl;
                cout << "1.Create new entry\n";
                cout << "2.Find and display\n";
                cout << "3.Jump to main\n";
                cin >> choice;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                   
                    cin >> choice;
                }

                switch (choice)
                {
                case '1':
                {
                    ofstream t1("teacher.txt", ios::app);

                    for (i = 0; choice != 'n' && choice != 'N'; i++)
                    {

                        if ((choice == 'y') || (choice == 'Y') || (choice == '1'))
                        {
                            cout << "Enter Teacher ID: ";
                            cin >> tech[i].id;
                            cout << "Enter First name: ";
                            cin >> tech[i].fst_name;
                            cout << "Enter Last name:: ";
                            cin >> tech[i].lst_name;
                            cout << "Enter qualification: ";
                            cin >> tech[i].qualification;

                            cout << "Enter Subject whos teach: ";
                            cin >> tech[i].subj;

                            cout << "Enter pay: ";
                            cin >> tech[i].pay;

                            t1 << tech[i].id << endl
                               << tech[i].fst_name << endl

                               << tech[i].lst_name << endl
                               << tech[i].qualification << endl
                               << endl
                               << tech[i].subj << endl

                               << tech[i].pay << endl;
                            cout << "Do you want to enter data: ";
                            cin >> choice;
                            while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore(1000, '\n');
                                
                                cin >> choice;
                            }
                        }
                    }

                    system("cls");

                    t1.close();
                }

                    continue;

                case '2':
                {
                    ifstream t2("teacher.txt");

                    cout << "Enter Teacher ID to be displayed: ";
                    cin >> find;

                    cout << endl;
                    int notFound = 0;
                    for (j = 0; ((j < i) || (!t2.eof())); j++)
                    {

                        getline(t2, tech[j].id);

                        if (tech[j].id == find)
                        {
                            notFound = 1;
                            cout << "Id: " << tech[j].id << endl;
                            cout << "First name: " << tech[j].fst_name << endl;

                            cout << "Last name: " << tech[j].lst_name << endl;
                            getline(t2, tech[j].lst_name);
                            cout << "Qualification: " << tech[j].qualification << endl;
                            getline(t2, tech[j].qualification);
                            cout << "Subject: " << tech[j].subj << endl;
                            getline(t2, tech[j].subj);

                            cout << "pay: " << tech[j].pay << endl;
                            getline(t2, tech[j].pay);
                        }
                    }
                    t2.close();
                    if (notFound == 0)
                    {

                        cout << "No Record Found" << endl;
                    }

                    cout << "Press any  key two times  to proceed";
                    getch();
                    getch();
                   
                }

                    continue;

                case '3':
                {
                    break;
                }
                }

                break;

                continue;
            }

        case '3':
        {
            break;
        }
        }
        break;
        }
    }
    return 0;
}