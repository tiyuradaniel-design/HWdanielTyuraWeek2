#pragma once
#include <string>

class Page
{
private:
	std::string _Status;
	std::string _Posts;
public:
	// constructor
	void init();
	// getters
	std::string getPosts();
	std::string getStatus();
	// setters
	void setStatus(std::string new_status);
	// fubctions
	void clearPage();
	void addLineToPosts(std::string new_line);

};