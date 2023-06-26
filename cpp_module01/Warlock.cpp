#include "Warlock.hpp"

Warlock::Warlock(std::string const &newName, std::string const &newTitle)
{
	name = newName;
	title = newTitle;
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

std::string const	&Warlock::getName() const
{
	return (name);
}

std::string const	&Warlock::getTitle() const
{
	return (title);
}

void	Warlock::setTitle(std::string const &newTitle)
{
	title = newTitle;
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		spellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell *>::iterator	it = spellBook.find(spellName);
	if (it != spellBook.end())
		delete it->second;
	spellBook.erase(spellName);
}

void	Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	ASpell *spell = spellBook[spellName];
	if (spell)
		spell->launch(target);
}
