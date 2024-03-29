// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class CLASES_GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:

	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaEspia();
	float Velocidad;
public: 

	virtual void Mover(float DeltaTime) ;
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
