#pragma once
#include "Service.h"
#include <SFML/Graphics.hpp>
#include <vector>
class SpriteComponent;

class RenderManager : public Service
{
private:
	sf::RenderWindow* m_gameWindowRef;
	std::vector<SpriteComponent*> m_renderComponents;
public:
	bool ComponentExists(SpriteComponent* t_drawable);
	void Register(SpriteComponent* t_drawable);
	void UnRegister(SpriteComponent* t_drawable);
	RenderManager(sf::RenderWindow* t_window);
	RenderManager();
	~RenderManager();
	void Window(sf::RenderWindow* window);
	void render();
	virtual void initialize() override;
};

