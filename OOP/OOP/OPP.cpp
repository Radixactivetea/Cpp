#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
	string name;
	string ownerName;
	int subsCount = 0;
	list<string> PublishedVideoTittles;
};

void firstway()
{
	YouTubeChannel ytChannel1;
	ytChannel1.name = "TheBanger";
	ytChannel1.ownerName = "MonkaW";
	ytChannel1.subsCount = 920150;
	ytChannel1.PublishedVideoTittles = { "Tiktok Reaction", "Cooking Stream" };

	cout << "YouTube Channel : " << ytChannel1.name << endl;
	cout << "Owner : " << ytChannel1.ownerName << endl;
	cout << "Total Subscribers : " << ytChannel1.subsCount << endl;
	cout << "Video : " << endl;
	for (string ytVideo : ytChannel1.PublishedVideoTittles)
	{
		cout << ytVideo << endl;
	}
}

void secway()
{
	YouTubeChannel* ytChannel2 = new YouTubeChannel();
	ytChannel2->name = "WarLordGamer";
	ytChannel2->ownerName = "TheJuicer";
	ytChannel2->subsCount = 1000000;
	ytChannel2->PublishedVideoTittles = { "Jean Paul Is Back!","The Marty Banks Thing.." };

	cout << "YouTube Channel : " << ytChannel2->name << endl;
	cout << "Owner : " << ytChannel2->ownerName << endl;
	cout << "Total Subscribers : " << ytChannel2->subsCount << endl;
	cout << "Video : " << endl;
	for (string ytVideo : ytChannel2->PublishedVideoTittles)
	{
		cout << ytVideo << endl;
	}
}

int main()
{
	//there are two diff ways
	firstway();
	cout << endl;
	//sec way used in linklist
	secway();
	


	system("pause>0");
}