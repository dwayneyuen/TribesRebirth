//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#ifndef _ITEMOBJECTTYPES_H_
#define _ITEMOBJECTTYPES_H_

// The type field is a bit set.

#define FearItemObjectType			(1 << 31)
#define FearPlayerObjectType    	(1 << 30)
#define FearTeleportObjectType  	(1 << 29)
#define FearCorpseObjectType    	(1 << 28)
#define StationObjectType       	(1 << 27)
#define FearMineObjectType      	(1 << 26)
#define FearMoveableObjectType  	(1 << 25)
#define FearVehicleObjectType   	(1 << 24)
#define StaticObjectType        	(1 << 23)
#define MoveableBaseObjectType  	(1 << 22)
#define ItemObjectType          	(1 << 21)
#define MarkerObjectType        	(1 << 20)
#define AIObjectType            	(1 << 19)

#endif
