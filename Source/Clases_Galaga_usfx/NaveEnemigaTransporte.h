// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"


UCLASS()
class CLASES_GALAGA_USFX_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector PosicionInicialTransporte01;
	float DistanciaTotalRecorrida;


public: 
	virtual void Tick(float DeltaTime) override;

public:
	// Funciones para obtener y establecer la posición inicial
	FVector GetPosicionInicial() const { return PosicionInicialTransporte01; }
	void SetPosicionInicial(const FVector& Posicion) { PosicionInicialTransporte01 = Posicion; }

	// Funciones para obtener y establecer la distancia total recorrida
	float GetDistanciaTotalRecorrida() const { return DistanciaTotalRecorrida; }
	void SetDistanciaTotalRecorrida(float Distancia) { DistanciaTotalRecorrida = Distancia; }


public:

	ANaveEnemigaTransporte();
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
