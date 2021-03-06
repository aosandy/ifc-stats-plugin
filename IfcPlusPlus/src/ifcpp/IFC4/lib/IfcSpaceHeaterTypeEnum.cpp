/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSpaceHeaterTypeEnum.h"

// TYPE IfcSpaceHeaterTypeEnum = ENUMERATION OF	(CONVECTOR	,RADIATOR	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSpaceHeaterTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSpaceHeaterTypeEnum> copy_self( new IfcSpaceHeaterTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSpaceHeaterTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSPACEHEATERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONVECTOR:	stream << ".CONVECTOR."; break;
		case ENUM_RADIATOR:	stream << ".RADIATOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSpaceHeaterTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONVECTOR:	return L"CONVECTOR";
		case ENUM_RADIATOR:	return L"RADIATOR";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSpaceHeaterTypeEnum> IfcSpaceHeaterTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSpaceHeaterTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSpaceHeaterTypeEnum>(); }
	shared_ptr<IfcSpaceHeaterTypeEnum> type_object( new IfcSpaceHeaterTypeEnum() );
	if( std_iequal( arg, L".CONVECTOR." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_CONVECTOR;
	}
	else if( std_iequal( arg, L".RADIATOR." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_RADIATOR;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
