#include "Brick.h"

Brick::Brick(const RectF& rect, Color color) :
	rect(rect),
	color(color),
	isDestroyed(false)
{
}

void Brick::Draw(Graphics& gfx)
{
	if (!isDestroyed)
	{
		gfx.DrawRect(rect.GetExpanded(-padding), color);
	}
}

bool Brick::DoBallCollission(Ball & ball)
{
	return false;
}
