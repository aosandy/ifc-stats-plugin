/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcPipeFittingTypeEnum.h"

// TYPE IfcPipeFittingTypeEnum = ENUMERATION OF	(BEND	,CONNECTOR	,ENTRY	,EXIT	,JUNCTION	,OBSTRUCTION	,TRANSITION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcPipeFittingTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPipeFittingTypeEnum> copy_self( new IfcPipeFittingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPipeFittingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPIPEFITTINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BEND:	stream << ".BEND."; break;
		case ENUM_CONNECTOR:	stream << ".CONNECTOR."; break;
		case ENUM_ENTRY:	stream << ".ENTRY."; break;
		case ENUM_EXIT:	stream << ".EXIT."; break;
		case ENUM_JUNCTION:	stream << ".JUNCTION."; break;
		case ENUM_OBSTRUCTION:	stream << ".OBSTRUCTION."; break;
		case ENUM_TRANSITION:	stream << ".TRANSITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPipeFittingTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BEND:	return L"BEND";
		case ENUM_CONNECTOR:	return L"CONNECTOR";
		case ENUM_ENTRY:	return L"ENTRY";
		case ENUM_EXIT:	return L"EXIT";
		case ENUM_JUNCTION:	return L"JUNCTION";
		case ENUM_OBSTRUCTION:	return L"OBSTRUCTION";
		case ENUM_TRANSITION:	return L"TRANSITION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPipeFittingTypeEnum> IfcPipeFittingTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPipeFittingTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPipeFittingTypeEnum>(); }
	shared_ptr<IfcPipeFittingTypeEnum> type_object( new IfcPipeFittingTypeEnum() );
	if( std_iequal( arg, L".BEND." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_BEND;
	}
	else if( std_iequal( arg, L".CONNECTOR." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_CONNECTOR;
	}
	else if( std_iequal( arg, L".ENTRY." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_ENTRY;
	}
	else if( std_iequal( arg, L".EXIT." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_EXIT;
	}
	else if( std_iequal( arg, L".JUNCTION." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_JUNCTION;
	}
	else if( std_iequal( arg, L".OBSTRUCTION." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_OBSTRUCTION;
	}
	else if( std_iequal( arg, L".TRANSITION." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_TRANSITION;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPipeFittingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
