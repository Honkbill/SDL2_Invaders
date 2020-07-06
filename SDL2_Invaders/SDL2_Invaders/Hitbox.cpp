#include "Hitbox.h"

Hitbox::Hitbox(int width, int height) {
	this->width = width;
	this->height = height;
}

Hitbox::Hitbox(const Hitbox& hitbox) {
	this->width = hitbox.width;
	this->height = hitbox.height;
}

Hitbox::~Hitbox() {
	delete& width;
	delete& height;
}