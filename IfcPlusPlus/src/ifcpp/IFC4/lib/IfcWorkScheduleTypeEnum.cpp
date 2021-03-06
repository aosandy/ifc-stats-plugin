/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcWorkScheduleTypeEnum.h"

// TYPE IfcWorkScheduleTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcWorkScheduleTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWorkScheduleTypeEnum> copy_self( new IfcWorkScheduleTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWorkScheduleTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWORKSCHEDULETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACTUAL:	stream << ".ACTUAL."; break;
		case ENUM_BASELINE:	stream << ".BASELINE."; break;
		case ENUM_PLANNED:	stream << ".PLANNED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWorkScheduleTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ACTUAL:	return L"ACTUAL";
		case ENUM_BASELINE:	return L"BASELINE";
		case ENUM_PLANNED:	return L"PLANNED";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcWorkScheduleTypeEnum> IfcWorkScheduleTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWorkScheduleTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWorkScheduleTypeEnum>(); }
	shared_ptr<IfcWorkScheduleTypeEnum> type_object( new IfcWorkScheduleTypeEnum() );
	if( std_iequal( arg, L".ACTUAL." ) )
	{
		type_object->m_enum = IfcWorkScheduleTypeEnum::ENUM_ACTUAL;
	}
	else if( std_iequal( arg, L".BASELINE." ) )
	{
		type_object->m_enum = IfcWorkScheduleTypeEnum::ENUM_BASELINE;
	}
	else if( std_iequal( arg, L".PLANNED." ) )
	{
		type_object->m_enum = IfcWorkScheduleTypeEnum::ENUM_PLANNED;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWorkScheduleTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWorkScheduleTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
