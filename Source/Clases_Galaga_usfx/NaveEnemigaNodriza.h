// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */

UCLASS()
class CLASES_GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	

protected: 
	virtual void BeginPlay() override;
	FVector PosicionInicialNodriza01;
	float DistanciaTotalRecorrida;

public: 
	virtual void Tick(float DeltaTime) override;
	FVector PosicionInicial;

protected:
	// Velocidad de movimiento de la nave nodriza
	float Velocidad;

	// Velocidad de giro aleatorio de la nave nodriza
	float VelocidadDeGiro;

	// Ángulo acumulado de giro aleatorio de la nave nodriza
	float AnguloAcumulado;

public:
	// Funciones para obtener y establecer la posición inicial
	FVector GetPosicionInicial() const { return PosicionInicialNodriza01; }
	void SetPosicionInicial(const FVector& Posicion) { PosicionInicialNodriza01 = Posicion; }

	// Funciones para obtener y establecer la distancia total recorrida
	float GetDistanciaTotalRecorrida() const { return DistanciaTotalRecorrida; }
	void SetDistanciaTotalRecorrida(float Distancia) { DistanciaTotalRecorrida = Distancia; }

public:

	ANaveEnemigaNodriza();

public: 
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
};
