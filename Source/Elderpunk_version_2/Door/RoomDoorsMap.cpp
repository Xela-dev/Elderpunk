#include "RoomDoorsMap.h"

FDoor ARoomDoorsMap::GetRandomRoomDoors(EDirection exitDirection)
{
	int maxRandom = RoomDoors.Num() - 1;
	int rounds = 0, maxRounds = 20;
	
	while (rounds++ < maxRounds) {
		int idRandomRoom = FMath::RandRange(0,maxRandom-1);
		EDirection reverseDir = mapReverseDirection[exitDirection];

		if (idRandomRoom == idCurrentRoom) {
			continue;
		}
		
		for (FDoor& door : RoomDoors[idRandomRoom].Doors) {
			if (door.dir == reverseDir) {
				idCurrentRoom = idRandomRoom;
				isPositiveVectorTeleport = (reverseDir == EDirection::TOP || reverseDir == EDirection::RIGHT);
				return door;
			}
		}
	}
	
	return FDoor();
}