﻿#pragma once

#include "CoreMinimal.h"

#include "CardGameCardPileModel.h"
#include "CardGameScopedModel.h"

#include "CardGamePlayerModel.generated.h"

USTRUCT()
struct CARDGAME_API FCardGamePlayerModel
{
	GENERATED_BODY()

public:
	int32 GetPlayerIndex() const;
	void SetPlayerIndex(int32 InPlayerIndex);
	void AddCardPile(TSubclassOf<UCardGameCardPile> CardPileClass);
	
private:
	int32 PlayerIndex;
	FCardGameScopedModel PlayerModel;
	TArray<FCardGameCardPileModel> PlayerCardPiles;
};
