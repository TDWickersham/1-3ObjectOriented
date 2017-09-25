#pragma once
#include <string>

using namespace std;

struct ServerInfo
{
	std::string servername;
	std::string region;
	int CurPlayercount;
	int MaxPlayercount;
	int ping;
};

class ServerBrowserService
{
private:
	const static int SERVERINFO_CAPACITY = 20;

	ServerInfo servers[SERVERINFO_CAPACITY];

	int serverCount;
public:
	ServerBrowserService();

	bool registerServer(ServerInfo newServer);

	int getServers(ServerInfo * dstArray, size_t dstSize);
};