#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
	string name;
	string ownerName;
	int subsCount = 1000;
	list<string> PublishedVideoTittles;
public:
	YouTubeChannel(string Name, string ownername)
	{
		name = Name;
		ownerName = ownername;
	}

	void subscribe()
	{
		subsCount++;
	}

	void unsubscribe()
	{
		if(subsCount > 0)
		subsCount--;
	}

	void title(string title)
	{
		PublishedVideoTittles.push_back(title);


	}

	void getinfo()
	{
		cout << "YouTube Channel : " << name << endl;
		cout << "Owner : " << ownerName << endl;
		cout << "Total Subscribers : " << subsCount << endl;
		cout << "Video : " << endl;
		for (string ytVideo : PublishedVideoTittles)
		{
			cout << ytVideo << endl;
		}
	}
};

int main()
{
	YouTubeChannel ytChannel("WarLordGamer", "TheJuicer");
	//ytChannel.PublishedVideoTittles.push_back("Jean Paul Is Back!");
	//ytChannel.PublishedVideoTittles.push_back("The Marty Banks Thing..");
	//ytChannel.subsCount = 3219321;
	ytChannel.title("Jean Paul Is Back!");
	ytChannel.title("The Marty Banks Thing..");
	ytChannel.subscribe();
	ytChannel.subscribe();
	ytChannel.unsubscribe();

	ytChannel.getinfo();




	system("pause>0");
}