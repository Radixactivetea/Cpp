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

	YouTubeChannel(string name, string ownername)
	{
		name = name;
		ownerName = ownername;
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
	ytChannel.PublishedVideoTittles.push_back("Jean Paul Is Back!");
	ytChannel.PublishedVideoTittles.push_back("The Marty Banks Thing..");
	ytChannel.getinfo();



	cout << endl;

	YouTubeChannel ytChannel2("TheBanger", "MonkaW");
	ytChannel2.getinfo();


	system("pause>0");
}