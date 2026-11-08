#pragma once
#include <string>
#include "DeviceList.h"

class User 
{
private:
	std::string _username;
	unsigned int _id;
	unsigned int _age;
	DevicesList _DevicesList;
public:
	// constructor
	void init(unsigned int id, std::string username, unsigned int age);
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