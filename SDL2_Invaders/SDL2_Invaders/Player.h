#pragma once

#ifndef ENTITY
	#define ENTITY
	#include "Entity.h"
#endif

#include "Projectile.h"

class Player :
	public Entity
{
	protected:
		int _firerate;

	public:
		Player(int pos_x, int pos_y, int velocity, int firerate);

		void set_firerate(int firerate);

		int get_firerate();

		Projectile* shoot();
};

