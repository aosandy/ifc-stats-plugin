/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcMechanicalFastenerTypeEnum = ENUMERATION OF	(ANCHORBOLT	,BOLT	,DOWEL	,NAIL	,NAILPLATE	,RIVET	,SCREW	,SHEARCONNECTOR	,STAPLE	,STUDSHEARCONNECTOR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcMechanicalFastenerTypeEnum : virtual public BuildingObject
{
public:
	enum IfcMechanicalFastenerTypeEnumEnum
	{
		ENUM_ANCHORBOLT,
		ENUM_BOLT,
		ENUM_DOWEL,
		ENUM_NAIL,
		ENUM_NAILPLATE,
		ENUM_RIVET,
		ENUM_SCREW,
		ENUM_SHEARCONNECTOR,
		ENUM_STAPLE,
		ENUM_STUDSHEARCONNECTOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcMechanicalFastenerTypeEnum() = default;
	IfcMechanicalFastenerTypeEnum( IfcMechanicalFastenerTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcMechanicalFastenerTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcMechanicalFastenerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcMechanicalFastenerTypeEnumEnum m_enum;
};

