#include "MyViewportClient.h"

bool UMyViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
  bool bHandled = Super::InputKey(EventArgs);

  UGameInstance* GI = GetGameInstance();

  if (!GI)
    return bHandled;

  for (ULocalPlayer* LocalPlayer : GI->GetLocalPlayers())
  {
    if (!LocalPlayer)
      continue;

    APlayerController* PC = LocalPlayer->PlayerController;

    if (!PC)
      continue;

    PC->InputKey(EventArgs);
  }

  return true;
}