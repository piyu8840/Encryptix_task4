#include <iostream>
#include <string>
using namespace std;

int main()
{
    int options = -1;
    string tasks[100] = {""};
    int count = 1;
    int c;

    while (options != 5)
    {
        cout << "   --- TO DO LISTS ---" << endl
             << endl;
        cout << "1 -  ADD NEW TASK " << endl;
        cout << "2 -  VIEW TASK " << endl;
        cout << "3 -  MARK TASK AS COMPLETED " << endl;
        cout << "4 -  REMOVE TASK " << endl;
        cout << "5 -  TERMINATE PROGRAM " << endl;
        cout << endl;
        cout << "Choose one option : ";
        cin >> options;

        switch (options)
        {
        case 1:
            cout << endl;
            char p;
            while (p != 'a')
            {
                cout << "Enter task " << count << " : ";
                cin.ignore(); // ignore or discard the next character in the input buffer.
                getline(cin, tasks[count]);
                count++;
                cout << "Enter " << count << " to continue" << " or Enter 'a' to go back to the previous menu : "; // it asks to user whether you want to add more tasks or go back to previous menu.
                cin >> p;
            }
            p = 0; // it changes the value of p for again execution of case 1.

            break;

        case 2:
            cout << endl;
            for (int i = 1; i < count; i++)
            {
                if (i == c) // it check the status of the task.
                {
                    cout << "Task " << i << " is " << tasks[i] << "\t\t\t Status --- 'COMPLETED'" << endl;
                }
                else
                {
                    cout << "Task " << i << " is " << tasks[i] << "\t\t\t Status --- 'PENDING'" << endl;
                }
            }
            break;

        case 3:
            cout << endl;
            cout << "Enter task number which you want to mark as completed : ";
            cin >> c;

            break;

        case 4:
            cout << endl;
            int remove;
            cout << "Enter the task number which you want to remove : ";
            cin >> remove;

            for (int i = remove; i < count; i++)
            {
                tasks[i] = tasks[i + 1];
            }
            count = count - 1;

            break;

        case 5:
            cout << endl;
            cout << "Program terminated successfully." << endl;
            break;

        default:
            cout << endl;
            cout << "Invaild Option !!";
            break;
        }
    }

    return 0;
}