/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMonthInYearNumber.h"

// TYPE IfcMonthInYearNumber = INTEGER;
IfcMonthInYearNumber::IfcMonthInYearNumber( int value ) { m_value = value; }
shared_ptr<BuildingObject> IfcMonthInYearNumber::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMonthInYearNumber> copy_self( new IfcMonthInYearNumber() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMonthInYearNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMONTHINYEARNUMBER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMonthInYearNumber::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMonthInYearNumber> IfcMonthInYearNumber::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMonthInYearNumber>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMonthInYearNumber>(); }
	shared_ptr<IfcMonthInYearNumber> type_object( new IfcMonthInYearNumber() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
