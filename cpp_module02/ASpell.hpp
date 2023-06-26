#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

	public:
	
		ASpell();
		ASpell(ASpell const &copy);
		ASpell(std::string const &newName, std::string const &newEffects);
		virtual ~ASpell();
		
		ASpell	&operator=(ASpell const &copy);
		
		std::string const	&getName() const;
		std::string const	&getEffects() const;
		
		void	launch(ATarget const &target) const;
		
		virtual ASpell	*clone() const = 0;
	
	protected:
	
	std::string	name;
	std::string	effects;
	
};
