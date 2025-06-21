#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;



int view_Task()
{
    FILE *task = fopen("task.txt", "r");
    if (task==NULL)
    {
        cout<<"Error File cannot be opened.\n";
        return 1;
    }
    else
    {
        cout<<"Today's Tasks are as Follow:-\n";
        char buffer[1024];
        while(fgets(buffer, sizeof(buffer), task))
        {
            cout << buffer;
        }
        fclose(task);
    }

    return 0;
}


int add_Task()
{
    FILE *task = fopen("task.txt", "a");
    cout<<"Enter the date and time in the format YYYY-MM-DD HH:MM:SS\n";
    char buffer[1024];
    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, task);
    // Saves the new task
    cout<<"Enter the task to be added:-\n";
    char buffer1[1024];
    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, task);
    fclose(task);
    cout<<"Task added successfully.\n";
    {
    cout<<"Today's Tasks are as Follow:-\n";
    char buffer[1024];
    while(fgets(buffer, sizeof(buffer), task))
    {
        cout << buffer;
    }
    fclose(task);
    }
    return 0;
}

int main()
{
    cout<<"                                             Welcome to your daily tasks\n"<<endl;
    // Opens the file "task.txt" in read mode and assigns the file pointer to 'task'.
    // If the file does not exist or cannot be opened, 'task' will be set to NULL.
    re:
    FILE *task = fopen("task.txt", "r");
    if (task==NULL)
    {
        cout<<"Error File cannot be opened.\n";
    }
    else
    {
        cout<<"Today's Tasks are as Follow:-\n";
        char buffer[1024];
        while(fgets(buffer, sizeof(buffer), task))
        {
            cout << buffer;
        }
        fclose(task);
    }
    cout<<"Enter 1 to add a task\n";
    cout<<"Enter 2 to view all the tasks\n";
    cout<<"Enter 3 to exit\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            add_Task();
            break;
        case 2:
            view_Task();
            break;
        case 3:
            cout<<"Exiting the program.\n";
            return 0;
        default:
            cout<<"Invalid choice. Please try again.\n";
            break;
    }
    return 0;

};
