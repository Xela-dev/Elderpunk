#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomDoorsMap.generated.h"

UENUM(BlueprintType)
enum class EDirection : uint8
{
	LEFT	UMETA(DisplayName = "Left"),
	RIGHT	UMETA(DisplayName = "Right"),
	DOWN	UMETA(DisplayName = "Down"),
	TOP		UMETA(DisplayName = "Top")
};

USTRUCT(BlueprintType)
struct FDoor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirection dir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Door;
};

USTRUCT(BlueprintType)
struct FRoomDoors
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDoor> Doors;
};

UCLASS(Blueprintable)
class ELDERPUNK_VERSION_2_API ARoomDoorsMap : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FRoomDoors> RoomDoors;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRandomRoomDoors", Keywords = ""), Category = "Xela|Doors")
	FDoor GetRandomRoomDoors(EDirection exitDirection);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isPositiveVectorTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 idCurrentRoom = 1;

private:
	TMap<EDirection, EDirection> mapReverseDirection = {
		{EDirection::TOP, EDirection::DOWN},
		{EDirection::DOWN, EDirection::TOP},
		{EDirection::LEFT, EDirection::RIGHT},
		{EDirection::RIGHT, EDirection::LEFT},
	};
};
