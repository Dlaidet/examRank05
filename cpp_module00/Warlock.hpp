#pragma once

#include<iostream>

class Warlock {

	public:
	
	Warlock(std::string const &newName, std::string const &newTitle);
	~Warlock();
	
	std::string const	&getName() const;
	std::string const	&getTitle() const;
	
	void	setTitle(std::string const &newTitle);
	
	void	introduce() const;
	
	private:
	
	std::string	name;
	std::string	title;
	
	Warlock();
	Warlock(Warlock const &copy);
	
	Warlock &operator=(Warlock const &copy);
};
