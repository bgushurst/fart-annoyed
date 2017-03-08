#pragma once

#include "Vec2.h"
#include "Graphics.h"
#include "Colors.h"

class Ball
{
private:
	Vec2 position;
	Vec2 velocity;
	float radius = 10.0f;
	Color color = Colors::Yellow;
public:
	Ball( Vec2 position, Vec2 velocity);
	void Draw(Graphics& gfx);
	void Update(float dt);
};

