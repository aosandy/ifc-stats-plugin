/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTransportElementTypeEnum = ENUMERATION OF	(ELEVATOR	,ESCALATOR	,MOVINGWALKWAY	,CRANEWAY	,LIFTINGGEAR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTransportElementTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTransportElementTypeEnumEnum
	{
		ENUM_ELEVATOR,
		ENUM_ESCALATOR,
		ENUM_MOVINGWALKWAY,
		ENUM_CRANEWAY,
		ENUM_LIFTINGGEAR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTransportElementTypeEnum() = default;
	IfcTransportElementTypeEnum( IfcTransportElementTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcTransportElementTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTransportElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTransportElementTypeEnumEnum m_enum;
};

