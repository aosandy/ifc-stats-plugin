/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWorkCalendarTypeEnum = ENUMERATION OF	(FIRSTSHIFT	,SECONDSHIFT	,THIRDSHIFT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWorkCalendarTypeEnum : virtual public BuildingObject
{
public:
	enum IfcWorkCalendarTypeEnumEnum
	{
		ENUM_FIRSTSHIFT,
		ENUM_SECONDSHIFT,
		ENUM_THIRDSHIFT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWorkCalendarTypeEnum() = default;
	IfcWorkCalendarTypeEnum( IfcWorkCalendarTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcWorkCalendarTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWorkCalendarTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWorkCalendarTypeEnumEnum m_enum;
};

