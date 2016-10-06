#include <iostream>
struct Zombie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int Fight(Zombie &z, Ninja &n)
{
	std::cout << "zombie is attacking ninja" << std::endl;
	n.health -= 10;
	std::cout << "the ninja took 10 damage his health is now -> " << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "the zombie attacked so his spirit is now -> " << z.spirit << std::endl;



	if (z.spirit <= 0)
	{
		std::cout << "No Spirit to attack. " << std::endl;
		//bool make attack = false
		bool Fight = false;
	}

	// attempting to add code to allow regi to attack 
	int Fight(Ninja &n, Zombie &z);
	{
		std::cout << "ninja is attacking zombie" << std::endl;
		z.health -= 10;
		std::cout << "the zombie took 10 damage his health is now -> " << z.health << std::endl;
		n.chi -= 1;
		std::cout << "the ninja attacked so his chi is now -> " << n.chi << std::endl;
	}






	//fighting is when a zombie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zombie
	//"damage" is when we decrement the health variable of a ninja or zombie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zombie
	return 1;
}
int main()
{
	Zombie chris = { 90, true, 5 };
	Zombie matthew = { 100, true, 15 };
	Ninja regi = { 150, true, 25 };
	Ninja wilson = { 100, true, 20 };
	char input = '0';


	while (input != 'q')
	{
		std::cin >> input;
		if (input == '/')
		{
			std::cout << "CHRIS FIGHT REGI" << std::endl;
			Fight(chris, regi);
		}

		// states that if chris zombie does not have spirit he cant attack.
		// Attempting to make it stop attacking when spirit is 0 but continue running until he dies

		if (chris.spirit <= 0)
		{
			bool Fight = false;
			break;
		}
		// trying to see if an if else will end fight when ninja health is 0
		else if (chris.health <= 0)
		{
			break;
		}

		//changed regi.health to chris.spirit to test if it will end when spirit = 0 and worked
		// changing it back to original and trying to insert the if chris.spirit <= 0 above in another if statment

		if (regi.health <= 0)
		{
			printf("wasted.... GAME OVER\n");
			printf("get guhd lol. \n");
			break;
		}
		printf("\n");
	}

	system("pause");
	//how i fight??
	return 0;
}

// Bugs:
// chris is able to attack while drained of mana *EDIT* now will not attack when drained of mana
// does not stop attacking when drained of mana *EDIT* now stops attacking when out of mana
// regi is unable to attack and only gets attacked until death *EDIT* now regi can attack back
// fight supposed to continue to happen until chris spirit AND health are 0 with chris not being able 
//to attack when spirt at 0 but he still can 



// Personal Reference and Reminders:
// now work on regi ability to attack
// try using if statement to make regi attack. as if it is a turn based game
// try if when chris mana is reduced by one, regi can attack right after reducing chris health by 10
// next try something that for every 2 attacks made, mana replenishes by 1
// || means or; && means and; ! means not;