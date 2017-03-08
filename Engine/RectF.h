#pragma once

#include "Vec2.h"

class RectF
{
public:
	RectF( float left, float top, float right, float bottom );
	RectF(Vec2 topLeft, Vec2 bottomRight);
	RectF(Vec2 topLeft, float width, float height);
	static RectF FromCenter(Vec2 center, float halfHeight, float halfWidth);
	bool CollidesWith(RectF target) const;
	bool ContinedBy(RectF target) const;
	RectF GetExpanded(float offset) const;
	Vec2 GetCenter() const;

public:
	float left;
	float top;
	float right;
	float bottom;
};