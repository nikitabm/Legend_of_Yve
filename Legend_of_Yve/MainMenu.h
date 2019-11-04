#pragma once
#include "Scene.h"
class MainMenu :
	public Scene
{
public:
	MainMenu(const std::string t_id) { _id = t_id; };
	~MainMenu() { };
	// Inherited via Scene

	virtual void Update();
	virtual void SetupGameObjects();

};

