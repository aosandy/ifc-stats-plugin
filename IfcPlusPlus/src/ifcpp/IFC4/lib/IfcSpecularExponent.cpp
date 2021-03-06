/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSpecularHighlightSelect.h"
#include "ifcpp/IFC4/include/IfcSpecularExponent.h"

// TYPE IfcSpecularExponent = REAL;
IfcSpecularExponent::IfcSpecularExponent( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcSpecularExponent::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSpecularExponent> copy_self( new IfcSpecularExponent() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSpecularExponent::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSPECULAREXPONENT("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSpecularExponent::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSpecularExponent> IfcSpecularExponent::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSpecularExponent>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSpecularExponent>(); }
	shared_ptr<IfcSpecularExponent> type_object( new IfcSpecularExponent() );
	readReal( arg, type_object->m_value );
	return type_object;
}
