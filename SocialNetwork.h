#pragma once
#include <string>
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string networkName;
	int minAge;

public:
	// constructor
	void init(std::string networkName, int minAge);
	// getters
	std::string getNetworkName();
	int getMinAge();
	std::string getWindowsDevices();
	// functions
	bool addProfile(Profile profile_to_add);
};