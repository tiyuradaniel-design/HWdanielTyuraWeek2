#include "Device.h"
#include <iostream>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
														 //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	unsigned int id;
	DeviceType type;
	std::string os;
	bool active;
public:
	// constructor
	Device(unsigned int id, DeviceType type, std::string os) 
	{
		this->id = id;
		this->type = type;
		this->os = os;
		this->active = true;
	}

	// getters

	std::string getOS() 
	{
		return this->os;
	}
	bool isActive() 
	{
		return this->active;
	}
	unsigned int getID() 
	{
		return this->id;
	}
	DeviceType getType() 
	{
		return this->type;
	}

	// setters

	void activate() 
	{
		this->active = true;
	}
	void deactivate() 
	{
		this->active = false;
	}

};