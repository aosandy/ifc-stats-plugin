/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcReinforcingMeshTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcReinforcingMeshTypeEnum : virtual public BuildingObject
{
public:
	enum IfcReinforcingMeshTypeEnumEnum
	{
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcReinforcingMeshTypeEnum() = default;
	IfcReinforcingMeshTypeEnum( IfcReinforcingMeshTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcReinforcingMeshTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcReinforcingMeshTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcReinforcingMeshTypeEnumEnum m_enum;
};

