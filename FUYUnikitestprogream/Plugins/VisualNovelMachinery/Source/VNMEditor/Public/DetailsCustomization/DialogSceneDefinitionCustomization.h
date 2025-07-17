// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "IPropertyTypeCustomization.h"

struct FDialogSceneDefinition;
/**
 * 
 */
class VNMEDITOR_API FDialogSceneDefinitionCustomization : public IDetailCustomization
{
public:
	/**
	 * It is just a convenient helpers which will be used
	 * to register our customization. When the propertyEditor module
	 * find our FMyStruct property, it will use this static method
	 * to instanciate our customization object.
	 */
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailBuilder );
	
	FReply OnRegenerateCameraNamesButtonClicked(TWeakObjectPtr<UDataTable> DataTable, FDialogSceneDefinition* Definition);
	FReply OnRegenerateSpawnLocationNamesButtonClicked(TWeakObjectPtr<UDataTable> DataTable, FDialogSceneDefinition* Definition);
};
