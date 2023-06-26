#pragma once

#include<iostream>
#include<map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

	public:
	
	Warlock(std::string const &newName, std::string const &newTitle);
	~Warlock();
	
	std::string const	&getName() const;
	std::string const	&getTitle() const;
	
	void	setTitle(std::string const &newTitle);
	
	void	introduce() const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string spellName);
	void	launchSpell(std::string spellName, ATarget const &target);
	
	private:
	
	std::string	name;
	std::string	title;
	
	std::map<std::string, ASpell *> spellBook;
	
	Warlock();
	Warlock(Warlock const &copy);
	
	Warlock &operator=(Warlock const &copy);
};
