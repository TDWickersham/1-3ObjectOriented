#include <iostream>
#include "servermanger.h"

ServerBrowserService::ServerBrowserService()
{
	
	serverCount = 0;
	// Is how many servers we already have inside 
	// our ServerInfo servers[] array
	// It also works as our index for accessing
	// our ServerInfo servers[] array
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	// Find the index for where to put the server
	if (serverCount < SERVERINFO_CAPACITY)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;

	}
	else
	{
		return false;
	}
	//Add a newServer to the Server array
	
	//Increment our Index


	//The reason we want to return a bool
	//Did we succesfully add a server?
	return false;
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)
{
	//dstArray is another serverArray were going to copy our servers[]
	//array into
	int size = 0;
	for (int i = 0; i < SERVERINFO_CAPACITY; i++)
	{
		dstArray[i] = servers[i];
		size++;
	}
	//We want to do this based on our filter settings
	//dstArry[index] = servers[idx];


	// its is an integer function, because we want to return the size
	// of the new array
	return size;
}
