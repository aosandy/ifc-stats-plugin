/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcAreaMeasure.h"

// TYPE IfcAreaMeasure = REAL;
IfcAreaMeasure::IfcAreaMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcAreaMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAreaMeasure> copy_self( new IfcAreaMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcAreaMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCAREAMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAreaMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcAreaMeasure> IfcAreaMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAreaMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAreaMeasure>(); }
	shared_ptr<IfcAreaMeasure> type_object( new IfcAreaMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
