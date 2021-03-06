/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSolarDeviceTypeEnum.h"

// TYPE IfcSolarDeviceTypeEnum = ENUMERATION OF	(SOLARCOLLECTOR	,SOLARPANEL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSolarDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSolarDeviceTypeEnum> copy_self( new IfcSolarDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSolarDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSOLARDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_SOLARCOLLECTOR:	stream << ".SOLARCOLLECTOR."; break;
		case ENUM_SOLARPANEL:	stream << ".SOLARPANEL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSolarDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SOLARCOLLECTOR:	return L"SOLARCOLLECTOR";
		case ENUM_SOLARPANEL:	return L"SOLARPANEL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSolarDeviceTypeEnum> IfcSolarDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSolarDeviceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSolarDeviceTypeEnum>(); }
	shared_ptr<IfcSolarDeviceTypeEnum> type_object( new IfcSolarDeviceTypeEnum() );
	if( std_iequal( arg, L".SOLARCOLLECTOR." ) )
	{
		type_object->m_enum = IfcSolarDeviceTypeEnum::ENUM_SOLARCOLLECTOR;
	}
	else if( std_iequal( arg, L".SOLARPANEL." ) )
	{
		type_object->m_enum = IfcSolarDeviceTypeEnum::ENUM_SOLARPANEL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSolarDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSolarDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
