#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemigaCaza.h"
#include "Clases_Galaga_usfxGameMode.generated.h"

class ANaveEnemigaCaza;

UCLASS(MinimalAPI)
class AClases_Galaga_usfxGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AClases_Galaga_usfxGameMode();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:

    //Creacion del Tmap para almacenar las naves enemigas caza
    TMap<int32, TArray<ANaveEnemigaCaza*>> MatizNavesEnemigasCaza;


    FVector SpawnLocationInicial; // Ubicación inicial para spawnear las naves enemigas caza

    float SeparacionColumnas; // Separación entre columnas de naves

    float SeparacionFilas; // Separación entre filas de naves

    void Eliminacion_Filas_TMap();//funcion que nos ayudara a eliminar las naves enemigas caza
};
