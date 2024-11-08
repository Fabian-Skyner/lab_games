#pragma once
#include <SFML/Graphics.hpp>

class Ship : public sf::Sprite {
protected:
	sf::IntRect _sprite;
	// default constructor is hidden
	Ship();
public:
	// constructor that takes a sprite
	explicit Ship (sf::IntRect ir);
	// "Pure virtual deconstructor -- makes this an abstract class and avoids undefined behaviour!"
	virtual ~Ship() = 0;
	// virtual updater - can be overridden, but not pure virtual
	virtual void Update(const float &dt);
};

class Invader : public Ship {
public:
	Invader(sf::IntRect ir, sf::Vector2f pos);
	Invader();
	void Update(const float &dt) override;
	// movement stuf
	static bool direction;
	static float speed;
};