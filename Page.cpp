#include "Page.h"
#include <iostream>
#include <string>

class Page
{
private:
	std::string _Status;
	std::string _Posts;
public:
	// constructor
	void init() 
	{
		this->_Status = "";
		this->_Posts = "";
	}
	// getters
	std::string getPosts() 
	{
		return this->_Posts;
	}
	std::string getStatus() 
	{
		return this->_Status;
	}
	// setters
	void setStatus(std::string new_status) 
	{
		this->_Status = new_status;
	}
	// fubctions
	void clearPage()
	{
		this->_Posts = "";
	}
	void addLineToPosts(std::string new_line) 
	{
		this->_Posts += "\n" + new_line;
	}

};