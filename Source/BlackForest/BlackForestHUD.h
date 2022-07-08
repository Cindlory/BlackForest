// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlackForestHUD.generated.h"

UCLASS()
class ABlackForestHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABlackForestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

