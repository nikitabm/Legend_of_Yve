#pragma once
#include "Component.h"
#include <SFML/System.hpp>
class Collider :
	public Component
{

private:
	sf::Vector2f _size;
	sf::Vector2f _position;

public:

	sf::Vector2f Size() const { return _size; };
	void SetSize(sf::Vector2f t_size) { _size = t_size; };
	sf::Vector2f Position() const { return _position; };
	void SetPosition(sf::Vector2f t_position) { _position = t_position; };
	void SetPosition(sf::Vector2f* t_position) { _position = *t_position; };
	Collider() { };
	~Collider();

	void Start() override;
	void Update() override;




};

