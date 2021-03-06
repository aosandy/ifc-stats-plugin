/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFlowMeterTypeEnum.h"

// TYPE IfcFlowMeterTypeEnum = ENUMERATION OF	(ENERGYMETER	,GASMETER	,OILMETER	,WATERMETER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcFlowMeterTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFlowMeterTypeEnum> copy_self( new IfcFlowMeterTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFlowMeterTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFLOWMETERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ENERGYMETER:	stream << ".ENERGYMETER."; break;
		case ENUM_GASMETER:	stream << ".GASMETER."; break;
		case ENUM_OILMETER:	stream << ".OILMETER."; break;
		case ENUM_WATERMETER:	stream << ".WATERMETER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFlowMeterTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ENERGYMETER:	return L"ENERGYMETER";
		case ENUM_GASMETER:	return L"GASMETER";
		case ENUM_OILMETER:	return L"OILMETER";
		case ENUM_WATERMETER:	return L"WATERMETER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFlowMeterTypeEnum> IfcFlowMeterTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFlowMeterTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFlowMeterTypeEnum>(); }
	shared_ptr<IfcFlowMeterTypeEnum> type_object( new IfcFlowMeterTypeEnum() );
	if( std_iequal( arg, L".ENERGYMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_ENERGYMETER;
	}
	else if( std_iequal( arg, L".GASMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_GASMETER;
	}
	else if( std_iequal( arg, L".OILMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_OILMETER;
	}
	else if( std_iequal( arg, L".WATERMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_WATERMETER;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
