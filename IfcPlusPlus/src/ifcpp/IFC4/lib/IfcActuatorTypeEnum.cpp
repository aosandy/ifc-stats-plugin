/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcActuatorTypeEnum.h"

// TYPE IfcActuatorTypeEnum = ENUMERATION OF	(ELECTRICACTUATOR	,HANDOPERATEDACTUATOR	,HYDRAULICACTUATOR	,PNEUMATICACTUATOR	,THERMOSTATICACTUATOR	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcActuatorTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcActuatorTypeEnum> copy_self( new IfcActuatorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcActuatorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCACTUATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ELECTRICACTUATOR:	stream << ".ELECTRICACTUATOR."; break;
		case ENUM_HANDOPERATEDACTUATOR:	stream << ".HANDOPERATEDACTUATOR."; break;
		case ENUM_HYDRAULICACTUATOR:	stream << ".HYDRAULICACTUATOR."; break;
		case ENUM_PNEUMATICACTUATOR:	stream << ".PNEUMATICACTUATOR."; break;
		case ENUM_THERMOSTATICACTUATOR:	stream << ".THERMOSTATICACTUATOR."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcActuatorTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ELECTRICACTUATOR:	return L"ELECTRICACTUATOR";
		case ENUM_HANDOPERATEDACTUATOR:	return L"HANDOPERATEDACTUATOR";
		case ENUM_HYDRAULICACTUATOR:	return L"HYDRAULICACTUATOR";
		case ENUM_PNEUMATICACTUATOR:	return L"PNEUMATICACTUATOR";
		case ENUM_THERMOSTATICACTUATOR:	return L"THERMOSTATICACTUATOR";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcActuatorTypeEnum> IfcActuatorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcActuatorTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcActuatorTypeEnum>(); }
	shared_ptr<IfcActuatorTypeEnum> type_object( new IfcActuatorTypeEnum() );
	if( std_iequal( arg, L".ELECTRICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_ELECTRICACTUATOR;
	}
	else if( std_iequal( arg, L".HANDOPERATEDACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_HANDOPERATEDACTUATOR;
	}
	else if( std_iequal( arg, L".HYDRAULICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_HYDRAULICACTUATOR;
	}
	else if( std_iequal( arg, L".PNEUMATICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_PNEUMATICACTUATOR;
	}
	else if( std_iequal( arg, L".THERMOSTATICACTUATOR." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_THERMOSTATICACTUATOR;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcActuatorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
