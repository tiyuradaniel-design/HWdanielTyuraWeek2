#pragma once
#include <string>
#include "DeviceList.h"

class user 
{
private:
	std::string _username;
	unsigned int _id;
	unsigned int _age;
	DevicesList _DevicesList;
public:
	// constructor
	user(std::string username, unsigned int id, unsigned int age);
	// getters
	std::string getUsername();
	unsigned int getID();
	unsigned int getAge();
	DevicesList& getDevicesList();
	
	// functions
	void clear();
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn();
};