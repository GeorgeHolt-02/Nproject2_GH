// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MySaveGame.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

UCLASS()
class NPROJECT2_GH_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	//Sets default values
	UMyGameInstance();

	/** Player's lives (starting, max and current, respectively */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int PlayerLives_Starting;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int PlayerLives_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerLives_Current;

	/** Player's current score */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerScore;

	/**Current score required for score 1-Ups */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ScoreForXtraLives;
	
	/** Score required for the player's first score 1-Up */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int ScoreForFirstXtraLife;

	/** Score required for subsequent score 1-Ups */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int ScoreForSubsequentXtraLives;

	/** Score accumulated since last score 1-Up */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ScoreSinceLastXtraLife;

	/** Level name array */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UWorld>> Levels;

	/** Next level's index */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int NextLevelIndex;
	
	/** Total number of enemies left in the current level */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int EnemyNum;

	/** Total number of enemies in the current level */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int LevelEnemyNum;
	
	/** Whether or not to load next level when EnemyNum <= 0 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanLoadNextLevel;

	/** Whether or not to restart whenever the player dies */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanRestart;

	//Save game class to create an object of
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UMySaveGame> SaveGameBP;
	
	/** Top ten scores */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FRecord> TopTenScores;

	//Player's personal best
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerPB;

	// Game over widget reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UWidget_GameOver> GameOverRef;

	//Level restart timer handle
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_RestartTimer;
	
	//Next level load timer handle
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle Handle_NextLevelTimer;

	//Whether or not the player has died
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPlayerDead;
	
protected:


public:
	void Init() override;
	
	//Loads the specified level
	UFUNCTION()
	void LoadSpecifiedLevel(TSoftObjectPtr<UWorld> Level);

	//Loads the specified level by name
	UFUNCTION()
	void LoadSpecifiedLevelByName(FName LevelName);

	//Level restart timer
	UFUNCTION()
	void StartRestartTimer();

	UFUNCTION()
	void StartNextLevelTimer();

	//Grants the player 1-Ups based on score
	UFUNCTION()
	void AddXtraLives();
};
