#include "RectF.h"

RectF::RectF(float left, float top, float right, float bottom) :
	left(left),
	top(top),
	right(right),
	bottom(bottom)
{

}

RectF::RectF(Vec2 topLeft, Vec2 bottomRight)
{
	RectF(topLeft.x, topLeft.y, bottomRight.x, bottomRight.y);
}

RectF::RectF(Vec2 topLeft, float width, float height)
{
	RectF(topLeft.x, topLeft.y, topLeft.x + width, topLeft.y + height);
}

RectF RectF::FromCenter(Vec2 center, float halfHeight, float halfWidth)
{
	const Vec2 half(halfWidth, halfHeight);
	return RectF(center - half, center + half);
}

bool RectF::CollidesWith(RectF target) const
{
	return right > target.left && left < target.right &&
		bottom > target.top && top < target.bottom;
}

bool RectF::ContinedBy(RectF target) const
{
	return left >= target.left && right <= target.right &&
		top >= target.top && bottom <= target.bottom;
}

RectF RectF::GetExpanded(float offset) const
{
	return RectF(left - offset, top - offset, right + offset, bottom + offset);
}

Vec2 RectF::GetCenter() const
{
	return Vec2(
		left + (right - left) / 2,
		top + (bottom - top) / 2
	);
}
