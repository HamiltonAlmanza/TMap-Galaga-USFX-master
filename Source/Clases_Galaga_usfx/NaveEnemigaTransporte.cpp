// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaTransporte.h"

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
	DistanciaRecorrida += FVector::Distance(GetActorLocation(), PosicionInicialTransporte01);
}


ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveEspia/Nave_Espia.Nave_Espia'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	PosicionInicialTransporte01 = FVector(500.0f, 900.0f, 350.0f);
	DistanciaMaxima = 3500.0f;
	DistanciaRecorrida = 0.0f;
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	// Define la velocidad de movimiento horizontal de la nave
	float VelocidadHorizontal = 50.0f; // Puedes ajustar este valor según la velocidad deseada

	// Define una velocidad de rotación
	float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

	// Calcula el desplazamiento horizontal en la dirección deseada
	FVector DireccionMovimiento = GetActorForwardVector(); // Mueve la nave hacia adelante
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	// Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

	// Calcula el ángulo de rotación basado en el tiempo
	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

	// Calcula las coordenadas X e Y para el movimiento en zigzag
	float AmplitudZigzag = 50.0f; // Amplitud del zigzag
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag; // Calcula el desplazamiento en el eje Y para el zigzag

	// Calcula la nueva posición sumando el desplazamiento horizontal, el zigzag y la posición actual
	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(0.0f, ZigzagOffset, 0.0f);

	// Actualiza la distancia total recorrida sumando la magnitud del desplazamiento horizontal
	DistanciaTotalRecorrida += DesplazamientoHorizontal.Size();
	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
	//if (DistanciaTotalRecorrida > DistanciaMaxima)
	//{
	//	// Reinicia la posición inicial y la distancia total recorrida
	//	SetActorLocation(PosicionInicialTransporte01);
	//	DistanciaTotalRecorrida = 0.0f;
	//}
}

void ANaveEnemigaTransporte::Destruirse()
{
	Destroy();
}

void ANaveEnemigaTransporte::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaTransporte::Atacar(bool bAtacar)
{
}
