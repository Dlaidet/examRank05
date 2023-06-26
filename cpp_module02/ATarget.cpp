#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(ATarget const &copy)
{
	*this = copy;
}

ATarget::ATarget(std::string const &newType)
{
	type = newType;
}

ATarget::~ATarget() {}

ATarget	&ATarget::operator=(ATarget const &copy)
{
	type = copy.type;
	return (*this);
}

std::string const	&ATarget::getType() const
{
	return (type);
}

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}
