#include "Brick.h"

Brick::Brick(const RectF& rect, Color color) :
	rect(rect),
	color(color)
{
}

void Brick::Draw(Graphics& gfx)
{
	if (!isDestroyed)
	{
		gfx.DrawRect(rect, color);
	}
}

bool Brick::DoBallCollission(Ball & ball)
{
	return false;
}
