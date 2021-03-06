/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcArithmeticOperatorEnum = ENUMERATION OF	(ADD	,DIVIDE	,MULTIPLY	,SUBTRACT);
class IFCQUERY_EXPORT IfcArithmeticOperatorEnum : virtual public BuildingObject
{
public:
	enum IfcArithmeticOperatorEnumEnum
	{
		ENUM_ADD,
		ENUM_DIVIDE,
		ENUM_MULTIPLY,
		ENUM_SUBTRACT
	};

	IfcArithmeticOperatorEnum() = default;
	IfcArithmeticOperatorEnum( IfcArithmeticOperatorEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcArithmeticOperatorEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcArithmeticOperatorEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcArithmeticOperatorEnumEnum m_enum;
};

