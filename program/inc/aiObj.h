#pragma once

#include "PlayerManager.h"
#include "itemObjectTypes.h"

// TODO: Made this up
const int MaximumDirectives = 256;

class AIObj {

public:
	class Target {
		Player* findPlayerObj(void);
	};

	class Directive {
	public:
		Directive();

		int order;

		int operator<(const Directive& dir) const;
		void getPointAndRadius(const char* in_PointAndRadius);
		void printf(void);
		void setDefaultCallbacks(void);
	};

	class Incrementor {
		float increment;
		float reduce;
		float min_inc;

		float getInc(float absDiff);
		void init(float inc);
	};

	class IQVariables {
		float spotDistOverride;
		float thinkWait;
		float spotDist;
		float maxSpeed;
		//float pitchInc;
		//float turnInc;
		int vertDope[2];
		float smartGuyWeaponRange;
		float dumbGuyWeaponRange;
		float smartGuyMinAccuracy;

		IQVariables(bool isBest);
		void scale(float unitScale);
		float getWeaponAccuracy(float range);
		float spotDistance(void);
	};

	class Trigger {
		int counter;
		int wasPressed;
		int windup;

		bool press(void);
		void preLoop(void);
	};

	bool active;
	const static Int32 collisionMask;
	bool didFirstTimeSetup;
	bool doneWithPath;
	Vector<int> directives;
	Point3F lastWaypointLoc;
	char* name;
	int order;
	Player* player;
	int playerId;
	Point3F pos;
	int pri;
	float radius;
	static Random rand;
	int seekFlag;
	int counter;
	Point3F seekLoc;
	Point3F seekOff;
	Player* subtype;
	int timeHere;
	static Int32 type;
	int pathIndex;
	int pathDirection;
	int periodicCbWait;

	static Player* findPlayerObject(int id, const char* name);

	bool nameMatches(const char* expr) const;
	int findDirective(int order, int typeFilter, bool getBeyond);
	PlayerManager::ClientRep* getBaseRepPtr(int id);
	void eraseDirectives(Vector<int>& eraseList);
	bool isEnemy(PlayerManager::BaseRep* br);
	bool isFrameAccurate();
	void timeSlicedOps(void);
	void setAutomaticTargets(void);
	void setScriptedTargets(void);
	void addDirective(Directive& newDirective, bool suppressSorting);
	int getDirectiveList(int indices[MaximumDirectives], int ofTheGivenTypes);
	int listDirectives(int typeFilter);
	bool removeDirectives(const char* ordExpr);
	int countDirectives(int ofTheGivenTypes);
	const char* installDCB(int dcb, const char* func, const char* ordExpr, int dirMask);
	void installCB(UInt16 whichCallback, const char* func);
	void setDefaultCallbacks(void);
	bool checkCallback(UInt16 whichCallback, Directive* dir);
	bool haveLOS(Player* from, Player* to);
	static bool randPct(float percent);

	float dist2d(const Point2F& loc1, const Point2F& loc2, bool forceAccurate);

	float dist3d(const Point3F& loc1, const Point3F& loc2, bool forceAccurate);
	AIObj();
};