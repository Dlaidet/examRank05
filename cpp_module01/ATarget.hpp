#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {

	public:
	
		ATarget();
		ATarget(ATarget const &copy);
		ATarget(std::string const &newType);
		virtual ~ATarget();
		
		ATarget	&operator=(ATarget const &copy);
		
		std::string const	&getType() const;
		
		void	getHitBySpell(ASpell const &spell) const;
		
		virtual ATarget	*clone() const = 0;
	
	protected:
	
	std::string	type;
	
};
