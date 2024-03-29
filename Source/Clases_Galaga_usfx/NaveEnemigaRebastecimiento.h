// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaRebastecimiento.generated.h"

/**
 * 
 */

UCLASS()
class CLASES_GALAGA_USFX_API ANaveEnemigaRebastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()

protected:

	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaRebastecimiento();

    virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
	
};
