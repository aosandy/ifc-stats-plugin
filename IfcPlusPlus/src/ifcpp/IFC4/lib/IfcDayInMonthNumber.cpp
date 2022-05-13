/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDayInMonthNumber.h"

// TYPE IfcDayInMonthNumber = INTEGER;
IfcDayInMonthNumber::IfcDayInMonthNumber( int value ) { m_value = value; }
shared_ptr<BuildingObject> IfcDayInMonthNumber::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDayInMonthNumber> copy_self( new IfcDayInMonthNumber() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDayInMonthNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDAYINMONTHNUMBER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDayInMonthNumber::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcDayInMonthNumber> IfcDayInMonthNumber::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDayInMonthNumber>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDayInMonthNumber>(); }
	shared_ptr<IfcDayInMonthNumber> type_object( new IfcDayInMonthNumber() );
	readInteger( arg, type_object->m_value );
	return type_object;
}