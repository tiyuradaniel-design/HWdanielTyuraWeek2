#pragma once
#include <iostream>
#include <string>
#include "User.h"
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
	user(std::string username, unsigned int id, unsigned int age) 
	{
		this->_username = username;
		this->_id = id;
		this->_age = age;
		this->_DevicesList.init();
	}
	// getters
	std::string getUsername() 
	{
		return this->_username;
	}
	unsigned int getID() 
	{
		return this->_id;
	}
	unsigned int getAge() 
	{
		return this->_age;
	}
	DevicesList& getDevicesList() 
	{
		return this->_DevicesList;
	}

	// functions
	void clear() 
	{
		this->_DevicesList.clear();
		this->_username = "";
		this->_id = 0;
		this->_age = 0;
	}
	void addDevice(Device newDevice) 
	{
		this->_DevicesList.add(newDevice);
	}
	bool checkIfDevicesAreOn() 
	{
		DeviceNode* current = this->_DevicesList.get_first();
		while (current != nullptr)
		{
			if (current->get_data().isActive())
			{
				return true;
			}
			current = current->get_next();
		}
		return false;
	}
};