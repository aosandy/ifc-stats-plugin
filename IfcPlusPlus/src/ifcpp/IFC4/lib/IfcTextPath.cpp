/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcTextPath.h"

// TYPE IfcTextPath = ENUMERATION OF	(LEFT	,RIGHT	,UP	,DOWN);
shared_ptr<BuildingObject> IfcTextPath::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTextPath> copy_self( new IfcTextPath() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTextPath::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEXTPATH("; }
	switch( m_enum )
	{
		case ENUM_LEFT:	stream << ".LEFT."; break;
		case ENUM_RIGHT:	stream << ".RIGHT."; break;
		case ENUM_UP:	stream << ".UP."; break;
		case ENUM_DOWN:	stream << ".DOWN."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTextPath::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_LEFT:	return L"LEFT";
		case ENUM_RIGHT:	return L"RIGHT";
		case ENUM_UP:	return L"UP";
		case ENUM_DOWN:	return L"DOWN";
	}
	return L"";
}
shared_ptr<IfcTextPath> IfcTextPath::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTextPath>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTextPath>(); }
	shared_ptr<IfcTextPath> type_object( new IfcTextPath() );
	if( std_iequal( arg, L".LEFT." ) )
	{
		type_object->m_enum = IfcTextPath::ENUM_LEFT;
	}
	else if( std_iequal( arg, L".RIGHT." ) )
	{
		type_object->m_enum = IfcTextPath::ENUM_RIGHT;
	}
	else if( std_iequal( arg, L".UP." ) )
	{
		type_object->m_enum = IfcTextPath::ENUM_UP;
	}
	else if( std_iequal( arg, L".DOWN." ) )
	{
		type_object->m_enum = IfcTextPath::ENUM_DOWN;
	}
	return type_object;
}
