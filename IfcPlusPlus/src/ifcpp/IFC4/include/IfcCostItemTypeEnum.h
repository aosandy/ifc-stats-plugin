/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCostItemTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCostItemTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCostItemTypeEnumEnum
	{
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCostItemTypeEnum() = default;
	IfcCostItemTypeEnum( IfcCostItemTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcCostItemTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCostItemTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCostItemTypeEnumEnum m_enum;
};

