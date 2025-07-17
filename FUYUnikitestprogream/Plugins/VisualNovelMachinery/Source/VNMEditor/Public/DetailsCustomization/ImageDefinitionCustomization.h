// Copyright (c) 2022 Al_Fe

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"

struct FImageDefinition;
/**
 * 
 */
class VNMEDITOR_API FImageDefinitionCustomization : public IPropertyTypeCustomization
{
public:
	/**
	 * It is just a convenient helpers which will be used
	 * to register our customization. When the propertyEditor module
	 * find our FMyStruct property, it will use this static method
	 * to instanciate our customization object.
	 */
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();
	virtual void CustomizeHeader( TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils ) override;
	virtual void CustomizeChildren( TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils ) override;

	void OnImagePropertyChanged(FImageDefinition* Definition);
};
