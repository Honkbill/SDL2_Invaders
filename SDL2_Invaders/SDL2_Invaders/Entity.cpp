#include "Entity.h"
		
Entity::Entity(int pos_x, int pos_y, int velocity, Hitbox* hitbox) {
	this->_pos_x = pos_x;
	this->_pos_y = pos_y;
	this->_velocity = velocity;
	this->hitbox = hitbox;
}

Entity::Entity(const Entity& e) {
	this->_pos_x = e._pos_x;
	this->_pos_y = e._pos_y;
	this->_velocity = e._velocity;
	this->hitbox = e.hitbox;
}

Entity::~Entity() {
	delete& _pos_x;
	delete& _pos_y;
}

void Entity::set_pos_x(int pos_x) {
	this->_pos_x = pos_x;
}

void Entity::set_pos_y(int pos_y) {
	this->_pos_y = pos_y;
}

int Entity::get_pos_x() {
	return _pos_x;
}

int Entity::get_pos_y() {
	return _pos_y;
}