#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"

int main()
{
	{
		std::cout << "===Test Main in subject===\n";
		Warlock richard("Richard", "foo");
  		richard.setTitle("Hello, I'm Richard the Warlock!");
  		BrickWall model1;

  		Polymorph* polymorph = new Polymorph();
  		TargetGenerator tarGen;

  		tarGen.learnTargetType(&model1);
  		richard.learnSpell(polymorph);

  		Fireball* fireball = new Fireball();

  		richard.learnSpell(fireball);

  		ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  		richard.introduce();
  		richard.launchSpell("Polymorph", *wall);
  		richard.launchSpell("Fireball", *wall);
  		//Add delete for valgrind, not present by default.
		delete (polymorph);
		delete (fireball);
	}
}
