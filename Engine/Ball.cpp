#include "Ball.h"

Ball::Ball(Vec2 position, Vec2 velocity) :
	position(position),
	velocity(velocity)
{
}

void Ball::Draw(Graphics & gfx)
{
	gfx.DrawCircle((int)position.x, (int)position.y, (int)radius, color);
}

void Ball::Update(float dt)
{

}
