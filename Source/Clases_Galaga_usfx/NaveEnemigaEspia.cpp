// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveEspia/Nave_Espia.Nave_Espia'"));
	//mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	// Mueve la nave hacia adelante multiplicando la velocidad por el tiempo transcurrido
	FVector Direccion = GetActorForwardVector();
	FVector NuevaPosicion = GetActorLocation() + (Direccion * Velocidad * DeltaTime);
	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaEspia::Atacar(bool bAtacar)
{
}
