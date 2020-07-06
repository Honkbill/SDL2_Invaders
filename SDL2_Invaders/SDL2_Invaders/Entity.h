#pragma once
#include "Hitbox.h"

class Entity
{
	protected:
		int _pos_x,
			_pos_y,
			_velocity;

		Hitbox* hitbox;

	public:
		Entity(int pos_x, int pos_y, int velocity, Hitbox* hitbox);

		Entity(const Entity& e);

		~Entity();

		virtual void calculate_pos() = 0;

		void set_pos_x(int pos_x);

		void set_pos_y(int pos_y);

		void set_velocity(int velocity);

		int get_pos_x();

		int get_pos_y();

		int get_velocity();

		Hitbox& get_hitbox();
};

