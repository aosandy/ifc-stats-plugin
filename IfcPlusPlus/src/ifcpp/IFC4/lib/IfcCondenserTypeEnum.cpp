/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCondenserTypeEnum.h"

// TYPE IfcCondenserTypeEnum = ENUMERATION OF	(AIRCOOLED	,EVAPORATIVECOOLED	,WATERCOOLED	,WATERCOOLEDBRAZEDPLATE	,WATERCOOLEDSHELLCOIL	,WATERCOOLEDSHELLTUBE	,WATERCOOLEDTUBEINTUBE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcCondenserTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCondenserTypeEnum> copy_self( new IfcCondenserTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCondenserTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONDENSERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AIRCOOLED:	stream << ".AIRCOOLED."; break;
		case ENUM_EVAPORATIVECOOLED:	stream << ".EVAPORATIVECOOLED."; break;
		case ENUM_WATERCOOLED:	stream << ".WATERCOOLED."; break;
		case ENUM_WATERCOOLEDBRAZEDPLATE:	stream << ".WATERCOOLEDBRAZEDPLATE."; break;
		case ENUM_WATERCOOLEDSHELLCOIL:	stream << ".WATERCOOLEDSHELLCOIL."; break;
		case ENUM_WATERCOOLEDSHELLTUBE:	stream << ".WATERCOOLEDSHELLTUBE."; break;
		case ENUM_WATERCOOLEDTUBEINTUBE:	stream << ".WATERCOOLEDTUBEINTUBE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCondenserTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AIRCOOLED:	return L"AIRCOOLED";
		case ENUM_EVAPORATIVECOOLED:	return L"EVAPORATIVECOOLED";
		case ENUM_WATERCOOLED:	return L"WATERCOOLED";
		case ENUM_WATERCOOLEDBRAZEDPLATE:	return L"WATERCOOLEDBRAZEDPLATE";
		case ENUM_WATERCOOLEDSHELLCOIL:	return L"WATERCOOLEDSHELLCOIL";
		case ENUM_WATERCOOLEDSHELLTUBE:	return L"WATERCOOLEDSHELLTUBE";
		case ENUM_WATERCOOLEDTUBEINTUBE:	return L"WATERCOOLEDTUBEINTUBE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCondenserTypeEnum> IfcCondenserTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCondenserTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCondenserTypeEnum>(); }
	shared_ptr<IfcCondenserTypeEnum> type_object( new IfcCondenserTypeEnum() );
	if( std_iequal( arg, L".AIRCOOLED." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_AIRCOOLED;
	}
	else if( std_iequal( arg, L".EVAPORATIVECOOLED." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_EVAPORATIVECOOLED;
	}
	else if( std_iequal( arg, L".WATERCOOLED." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_WATERCOOLED;
	}
	else if( std_iequal( arg, L".WATERCOOLEDBRAZEDPLATE." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_WATERCOOLEDBRAZEDPLATE;
	}
	else if( std_iequal( arg, L".WATERCOOLEDSHELLCOIL." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_WATERCOOLEDSHELLCOIL;
	}
	else if( std_iequal( arg, L".WATERCOOLEDSHELLTUBE." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_WATERCOOLEDSHELLTUBE;
	}
	else if( std_iequal( arg, L".WATERCOOLEDTUBEINTUBE." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_WATERCOOLEDTUBEINTUBE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCondenserTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
