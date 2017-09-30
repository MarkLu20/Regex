// Fill out your copyright notice in the Description page of Project Settings.

#include "RegexCompoent.h"
#include "Runtime/Core/Public/Internationalization/Regex.h"
#include "Engine/Engine.h"


// Sets default values for this component's properties
URegexCompoent::URegexCompoent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URegexCompoent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URegexCompoent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool URegexCompoent::RegexFunction(FString RegexString, FString Regexexpression)
{
	//FString Mylog;
	FString TextStr(RegexString);
	FRegexPattern TestPattern(Regexexpression);
	FRegexMatcher TestMatcher(TestPattern,TextStr);
	TestMatcher.SetLimits(0, TextStr.Len());
    return TestMatcher.FindNext();
	
}

