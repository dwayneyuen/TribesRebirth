#pragma once

class StaticBase {
	class StaticBaseData {
	public:
		int sfxAmbient;
		float maxDamage;
		bool isTranslucent;
		int outerRadius;
		bool disableCollision;
	};

public:
	static float prefShapeDetail;
};