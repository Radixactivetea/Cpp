#include <iostream>
#include <queue>
#include <string>

using namespace std;

void printQueue(queue<string> Task)
{
	while (!Task.empty())
	{
		cout << Task.front() << endl;
		Task.pop();
	}

	cout << "Press enter to continue...";
	system("pause>0");
	system("cls");

}

int main()
{
	//make a daily task using queue
	//1. input the task
	//2. show all task
	//3. task in queue

	string ans;
	int n = 0;

	cout << "WELCOME TO DAILY TASK NOTE" << endl;
	cout << "**************************" << endl;

	cout << "List your 5 task today: " << endl;

	queue<string> dailyTask;
	while (n != 5)
	{
		getline(cin, ans);
		dailyTask.push(ans);
		n++;
	}

	system("cls");

	cout << "Your task today : " << endl;
	printQueue(dailyTask);
	cout << "ALL TASK DONE. GOOD JOB!";


	system("pause>0");
}