// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

void ANaveEnemigaNodriza::BeginPlay()
{
    Super::BeginPlay();

    DistanciaRecorrida += FVector::Distance(GetActorLocation(), PosicionInicialNodriza01);
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveNodriza/Nave_Nodriza.Nave_Nodriza'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
    PosicionInicialNodriza01 = FVector(1000.0f, -700.0f, 200.0f);
    DistanciaMaxima = 1500.0f; // Por ejemplo, la distancia máxima predeterminada puede ser de 1000 unidades
    DistanciaRecorrida = 0.0f;
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
    // Define la velocidad de movimiento horizontal de la nave
    float VelocidadHorizontal = 50.0f; // Puedes ajustar este valor según la velocidad deseada

    // Define una velocidad de rotación
    float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

    // Calcula el desplazamiento horizontal en la dirección deseada
    FVector DireccionMovimiento = FVector(0.0f, -1.0f, 0.0f); // Por ejemplo, avanza hacia adelante en el eje X
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;//nos ayuda a emprajerar las velocidades en los diferentes dispositivos 

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

    // Calcula el ángulo de rotación basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 20.0f; // Radio del círculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del círculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del círculo

    // Calcula la nueva posición sumando las coordenadas X e Y al desplazamiento horizontal y a la posición actual
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);

    // Establece la nueva posición del actor
    SetActorLocation(NuevaPosicion);

    if (DistanciaTotalRecorrida > DistanciaMaxima)
    {
        SetActorLocation(PosicionInicialNodriza01);
        DistanciaTotalRecorrida = 0.0f;
    }
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaNodriza::Atacar(bool bAtacar)
{
}
