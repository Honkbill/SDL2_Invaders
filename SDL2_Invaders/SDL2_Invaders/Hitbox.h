#pragma once
class Hitbox
{
	protected:
		int width,
			height;

	public:
		Hitbox(int width, int height);

		Hitbox(const Hitbox& hitbox);

		~Hitbox();

		bool has_colided(const Hitbox& hitbox);

		int get_width();

		int get_height();
};

