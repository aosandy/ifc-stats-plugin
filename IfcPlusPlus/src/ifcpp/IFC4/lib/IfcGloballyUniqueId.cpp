/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"

// TYPE IfcGloballyUniqueId = STRING(22) FIXED;
IfcGloballyUniqueId::IfcGloballyUniqueId( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcGloballyUniqueId::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcGloballyUniqueId> copy_self( new IfcGloballyUniqueId() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcGloballyUniqueId::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCGLOBALLYUNIQUEID("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcGloballyUniqueId::toString() const
{
	return m_value;
}
shared_ptr<IfcGloballyUniqueId> IfcGloballyUniqueId::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcGloballyUniqueId>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcGloballyUniqueId>(); }
	shared_ptr<IfcGloballyUniqueId> type_object( new IfcGloballyUniqueId() );
	readString( arg, type_object->m_value );
	return type_object;
}