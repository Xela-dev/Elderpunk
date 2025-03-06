// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

/**
 * 
class ELDERPUNK_VERSION_2_API Notes : public AActor
{
	typedef std::map<std::string, FString> MAP;
	
public:
    
    	// setter, callable from Blueprint
	UFUNCTION(BlueprintCallable)
	void addNote(std::string title, FString desc);

	UFUNCTION(BlueprintCallable)
	void editNote(std::string title, FString desc);
	
	//setter
	UFUNCTION(BlueprintCallable)
	const FString getDescByTitle(std::string title);
	
	// getter, callable from Blueprint (and pure)
	UFUNCTION(BlueprintPure)
	const MAP getNotes();

	static MAP save;
	
private:

	bool isExistNoteByTitle(std::string& title);
};

 */