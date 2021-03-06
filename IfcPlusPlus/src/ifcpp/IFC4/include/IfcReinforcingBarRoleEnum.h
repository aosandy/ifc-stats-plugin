/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcReinforcingBarRoleEnum = ENUMERATION OF	(MAIN	,SHEAR	,LIGATURE	,STUD	,PUNCHING	,EDGE	,RING	,ANCHORING	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcReinforcingBarRoleEnum : virtual public BuildingObject
{
public:
	enum IfcReinforcingBarRoleEnumEnum
	{
		ENUM_MAIN,
		ENUM_SHEAR,
		ENUM_LIGATURE,
		ENUM_STUD,
		ENUM_PUNCHING,
		ENUM_EDGE,
		ENUM_RING,
		ENUM_ANCHORING,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcReinforcingBarRoleEnum() = default;
	IfcReinforcingBarRoleEnum( IfcReinforcingBarRoleEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcReinforcingBarRoleEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcReinforcingBarRoleEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcReinforcingBarRoleEnumEnum m_enum;
};

