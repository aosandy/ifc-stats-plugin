/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcElectricMotorTypeEnum = ENUMERATION OF	(DC	,INDUCTION	,POLYPHASE	,RELUCTANCESYNCHRONOUS	,SYNCHRONOUS	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcElectricMotorTypeEnum : virtual public BuildingObject
{
public:
	enum IfcElectricMotorTypeEnumEnum
	{
		ENUM_DC,
		ENUM_INDUCTION,
		ENUM_POLYPHASE,
		ENUM_RELUCTANCESYNCHRONOUS,
		ENUM_SYNCHRONOUS,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcElectricMotorTypeEnum() = default;
	IfcElectricMotorTypeEnum( IfcElectricMotorTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcElectricMotorTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcElectricMotorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcElectricMotorTypeEnumEnum m_enum;
};

