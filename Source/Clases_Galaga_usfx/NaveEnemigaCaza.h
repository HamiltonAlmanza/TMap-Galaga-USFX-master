// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

UCLASS()
class CLASES_GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector PosicionInicial;

public:
	ANaveEnemigaCaza();
	//Called every frame 
	virtual void Tick(float DeltaTime) override;

	//// Velocidad de la nave enemiga caza, configurable desde el editor
	//UPROPERTY(EditAnywhere, Category = "Configuración de Nave Enemiga")
	//float Velocidad;

public:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);


};
