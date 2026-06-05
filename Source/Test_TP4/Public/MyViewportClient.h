#pragma once

#include "Engine/GameViewportClient.h"
#include "MyViewportClient.generated.h"

UCLASS()
class UMyViewportClient : public UGameViewportClient
{
  GENERATED_BODY()

public:
  virtual bool InputKey(
    const FInputKeyEventArgs& EventArgs
  ) override;
};