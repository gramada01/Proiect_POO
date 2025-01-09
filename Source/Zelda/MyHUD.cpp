/// @file MyHUD.cpp
/// @brief This file contains the implementation of the AMyHUD class methods.

#include "MyHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"

/// @brief Draws the HUD.
void AMyHUD::DrawHUD()
{
    Super::DrawHUD();

    if (Canvas)
    {
        FString KillText = FString::Printf(TEXT("Kills: %d"), PlayerKills);
        FVector2D ScreenDimensions = FVector2D(Canvas->SizeX, Canvas->SizeY);

        FVector2D TextSize;
        float TextSizeX, TextSizeY;
        GetTextSize(KillText, TextSizeX, TextSizeY, GEngine->GetMediumFont());
        TextSize.X = TextSizeX;
        TextSize.Y = TextSizeY;

        FVector2D TextPosition = FVector2D(ScreenDimensions.X - TextSize.X - 50, 50);

        FCanvasTextItem TextItem(TextPosition, FText::FromString(KillText), GEngine->GetMediumFont(), FLinearColor::White);
        Canvas->DrawItem(TextItem);
    }
}

/// @brief Sets the number of player kills.
/// @param Kills The number of kills to set.
void AMyHUD::SetPlayerKills(int Kills)
{
    PlayerKills = Kills;
}