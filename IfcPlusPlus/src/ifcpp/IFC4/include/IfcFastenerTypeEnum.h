/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFastenerTypeEnum = ENUMERATION OF	(GLUE	,MORTAR	,WELD	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFastenerTypeEnum : virtual public BuildingObject
{
public:
	enum IfcFastenerTypeEnumEnum
	{
		ENUM_GLUE,
		ENUM_MORTAR,
		ENUM_WELD,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFastenerTypeEnum() = default;
	IfcFastenerTypeEnum( IfcFastenerTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcFastenerTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFastenerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFastenerTypeEnumEnum m_enum;
};
