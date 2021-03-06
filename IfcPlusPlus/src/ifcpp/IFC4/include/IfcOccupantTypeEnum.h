/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcOccupantTypeEnum = ENUMERATION OF	(ASSIGNEE	,ASSIGNOR	,LESSEE	,LESSOR	,LETTINGAGENT	,OWNER	,TENANT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcOccupantTypeEnum : virtual public BuildingObject
{
public:
	enum IfcOccupantTypeEnumEnum
	{
		ENUM_ASSIGNEE,
		ENUM_ASSIGNOR,
		ENUM_LESSEE,
		ENUM_LESSOR,
		ENUM_LETTINGAGENT,
		ENUM_OWNER,
		ENUM_TENANT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcOccupantTypeEnum() = default;
	IfcOccupantTypeEnum( IfcOccupantTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcOccupantTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcOccupantTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcOccupantTypeEnumEnum m_enum;
};

