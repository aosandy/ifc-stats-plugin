/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSoundPressureMeasure.h"

// TYPE IfcSoundPressureMeasure = REAL;
IfcSoundPressureMeasure::IfcSoundPressureMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcSoundPressureMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSoundPressureMeasure> copy_self( new IfcSoundPressureMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSoundPressureMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSOUNDPRESSUREMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSoundPressureMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSoundPressureMeasure> IfcSoundPressureMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSoundPressureMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSoundPressureMeasure>(); }
	shared_ptr<IfcSoundPressureMeasure> type_object( new IfcSoundPressureMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
