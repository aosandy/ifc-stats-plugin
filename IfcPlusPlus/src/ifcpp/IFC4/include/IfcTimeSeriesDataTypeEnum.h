/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTimeSeriesDataTypeEnum = ENUMERATION OF	(CONTINUOUS	,DISCRETE	,DISCRETEBINARY	,PIECEWISEBINARY	,PIECEWISECONSTANT	,PIECEWISECONTINUOUS	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTimeSeriesDataTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTimeSeriesDataTypeEnumEnum
	{
		ENUM_CONTINUOUS,
		ENUM_DISCRETE,
		ENUM_DISCRETEBINARY,
		ENUM_PIECEWISEBINARY,
		ENUM_PIECEWISECONSTANT,
		ENUM_PIECEWISECONTINUOUS,
		ENUM_NOTDEFINED
	};

	IfcTimeSeriesDataTypeEnum() = default;
	IfcTimeSeriesDataTypeEnum( IfcTimeSeriesDataTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcTimeSeriesDataTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTimeSeriesDataTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTimeSeriesDataTypeEnumEnum m_enum;
};

