#include <string>
#include "SocialNetwork.h"
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string networkName;
	int minAge;
	ProfileList profilesList;

public:
	// constructor
	void init(std::string networkName, int minAge) 
	{
		this->networkName = networkName;
		this->minAge = minAge;
	}
	// getters
	std::string getNetworkName() 
	{
		return this->networkName;
	}
	int getMinAge() 
	{
		return this->minAge;
	}
	std::string getWindowsDevices() {
		std::string windowsDevices = "";
		ProfileNode* currentProfileNode = this->profilesList.get_first();
		while (currentProfileNode != nullptr)
		{
			User currentUser = currentProfileNode->get_data().getOwner();
			DeviceNode* currentDeviceNode = currentUser.getDevicesList().get_first();
			while (currentDeviceNode != nullptr)
			{
				if (currentDeviceNode->get_data().getOS().starts_with("Windows"))
				{
					windowsDevices +=  '[' + currentDeviceNode->get_data().getID() + ", " + currentDeviceNode->get_data().getOS() + "], ";
				}
				currentDeviceNode = currentDeviceNode->get_next();
			}
			currentProfileNode = currentProfileNode->get_next();
		}
		return windowsDevices.substr(0, windowsDevices.length() - 2);
	}
	// functions
	bool addProfile(Profile profile_to_add) 
	{
		if (profile_to_add.getOwner().getAge() >= this->minAge)
		{
			this->profilesList.add(profile_to_add);
			return true;
		}
		else
		{
			return false;
		}
	}
};