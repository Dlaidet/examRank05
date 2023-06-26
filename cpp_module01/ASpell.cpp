#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(ASpell const &copy)
{
	*this = copy;
}

ASpell::ASpell(std::string const &newName, std::string const &newEffects)
{
	name = newName;
	effects = newEffects;
}

ASpell::~ASpell() {}
		
ASpell	&ASpell::operator=(ASpell const &copy)
{
	name = copy.name;
	effects = copy.effects;
	return (*this);
}
		
std::string const	&ASpell::getName() const
{
	return (name);
}

std::string const	&ASpell::getEffects() const
{
	return (effects);
}
		
void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell((*this));
}
