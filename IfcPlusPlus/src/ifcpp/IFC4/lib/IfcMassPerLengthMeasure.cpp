/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMassPerLengthMeasure.h"

// TYPE IfcMassPerLengthMeasure = REAL;
IfcMassPerLengthMeasure::IfcMassPerLengthMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcMassPerLengthMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMassPerLengthMeasure> copy_self( new IfcMassPerLengthMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMassPerLengthMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMASSPERLENGTHMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMassPerLengthMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMassPerLengthMeasure> IfcMassPerLengthMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMassPerLengthMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMassPerLengthMeasure>(); }
	shared_ptr<IfcMassPerLengthMeasure> type_object( new IfcMassPerLengthMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
