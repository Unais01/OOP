#include <iostream>
#include <vector>
using namespace std;

class Youtube
{
protected:
    int subscriberCount;
    string channelName;
    string ownerName;
    int views;
    vector<string> videos;

public:
    void Subscribe()
    {
        subscriberCount++;
    }
    void Unsubscribe()
    {
        subscriberCount--;
    }
    void AddVideos(const vector<string> &titleOfVideos)
    {
        for (const auto &video : titleOfVideos)
        {
            videos.push_back(video);
        }
    }
    Youtube(string channelname, string ownername, int subscriber)
    {
        channelName = channelname;
        subscriberCount = subscriber;
        ownerName = ownername;
    }
};

class CodingChannel : public Youtube
{
private:
    string favouriteEnvironment;

public:
    CodingChannel(string channelname, string ownername, int subscriber, string favEnv) : Youtube(channelname, ownername, subscriber)
    {
        favouriteEnvironment = favEnv;
    }
    string getFavEnv()
    {
        return favouriteEnvironment;
    }
    void ChannelDetails()
    {
        cout << "Channel Name :" << channelName << endl;
        cout << "Owner Name :" << ownerName << endl;
        cout << "Subsciber :" << subscriberCount << endl;
        cout << "Favourite environment : " << favouriteEnvironment << endl;
        for (auto itr : videos)
        {
            cout << itr << " ";
        }
    }
};
int main()
{
    cout << "Welcome to Inheritance in C++\n\n";

    // Youtube CodingChannel02("FreeCodeCamp", "Community Channel", 0);
    CodingChannel c1("Code With Harry", "Haris Ali Khan", 0, "Javascript");
    // c1.Subscribe();
    vector<string> titleOfVideo = {"C++ in one shot", "100 days of Javascript", "React BootCamp"};
    c1.AddVideos(titleOfVideo);
    c1.ChannelDetails();

    return 0;
}