/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcStackTerminalTypeEnum = ENUMERATION OF	(BIRDCAGE	,COWL	,RAINWATERHOPPER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcStackTerminalTypeEnum : virtual public BuildingObject
{
public:
	enum IfcStackTerminalTypeEnumEnum
	{
		ENUM_BIRDCAGE,
		ENUM_COWL,
		ENUM_RAINWATERHOPPER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcStackTerminalTypeEnum() = default;
	IfcStackTerminalTypeEnum( IfcStackTerminalTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcStackTerminalTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStackTerminalTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcStackTerminalTypeEnumEnum m_enum;
};
