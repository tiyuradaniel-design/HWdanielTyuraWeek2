#include <string>
#include <iostream>
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
	Profile(User owner) 
	{
		this->Owner = owner;
		this->ProfilePage.init();
		this->FriendsList.init();
	}
	// getters
	User getOwner() {
		return this->Owner;
	}
	std::string getPage() {
		return "Status: " + this->ProfilePage.getStatus() + "\n*******************\n*******************\n" + this->ProfilePage.getPosts();
	}
	std::string getFrinds() 
	{
		std::string friends = "";
		UserNode* current = this->FriendsList.get_first();
		while (current != nullptr)
		{
			friends += current->get_data().getUsername() + ",";
			current = current->get_next();
		}
		return friends.substr(0, friends.length()-1);
	}
	std::string getFrindsWithSameNameLength()
	{
		int len = this->Owner.getUsername().length();
		std::string friends = "";
		UserNode* current = this->FriendsList.get_first();
		while (current != nullptr)
		{
			if (len == current->get_data().getUsername().length())
			{
				friends += current->get_data().getUsername() + ",";
			}
			current = current->get_next();
		}
		return friends;
	}
	// setters
	void setStatus(std::string new_status) 
	{
		this->ProfilePage.setStatus(new_status);
	}
	// functions
	void addpostToProfilePage(std::string new_post) 
	{
		this->ProfilePage.addLineToPosts(new_post);
	}
	void addFriend(User friend_to_add) 
	{
		this->FriendsList.add(friend_to_add);
	}
};