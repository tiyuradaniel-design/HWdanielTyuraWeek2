#include "Device.h"
#include <iostream>
#include <string>

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
	unsigned int _id;
	DeviceType _type;
	std::string _os;
	bool _active;
public:
	// constructor
	Device(unsigned int id, DeviceType type, std::string os) 
	{
		this->_id = id;
		this->_type = type;
		this->_os = os;
		this->_active = true;
	}

	// getters

	std::string getOS() 
	{
		return this->_os;
	}
	bool isActive() 
	{
		return this->_active;
	}
	unsigned int getID() 
	{
		return this->_id;
	}
	DeviceType getType() 
	{
		return this->_type;
	}

	// setters

	void activate() 
	{
		this->_active = true;
	}
	void deactivate() 
	{
		this->_active = false;
	}

};