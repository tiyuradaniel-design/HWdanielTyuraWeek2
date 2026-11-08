#pragma once
#include <string>
#include "Page.h"
#include "User.h"
#include "UserList.h"

class Profile
{
private:
	User Owner;
	Page ProfilePage;
	UserList FriendsList;

public:
	// constructor
	Profile(User owner);
	// getters
	User getOwner();
	std::string getPage();
	std::string getFrinds();
	std::string getFrindsWithSameNameLength();
	// setters
	void setStatus(std::string new_status);
	// functions
	void addpostToProfilePage(std::string new_post);
	void addFriend(User friend_to_add);
};