/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDerivedMeasureValue.h"
#include "IfcModulusOfRotationalSubgradeReactionSelect.h"

// TYPE IfcModulusOfRotationalSubgradeReactionMeasure = REAL;
class IFCQUERY_EXPORT IfcModulusOfRotationalSubgradeReactionMeasure : public IfcDerivedMeasureValue, public IfcModulusOfRotationalSubgradeReactionSelect
{
public:
	IfcModulusOfRotationalSubgradeReactionMeasure() = default;
	IfcModulusOfRotationalSubgradeReactionMeasure( double value );
	virtual const char* className() const { return "IfcModulusOfRotationalSubgradeReactionMeasure"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcModulusOfRotationalSubgradeReactionMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	double m_value;
};

