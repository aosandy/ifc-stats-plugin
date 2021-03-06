/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcProjectOrderTypeEnum.h"

// TYPE IfcProjectOrderTypeEnum = ENUMERATION OF	(CHANGEORDER	,MAINTENANCEWORKORDER	,MOVEORDER	,PURCHASEORDER	,WORKORDER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcProjectOrderTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcProjectOrderTypeEnum> copy_self( new IfcProjectOrderTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcProjectOrderTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPROJECTORDERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CHANGEORDER:	stream << ".CHANGEORDER."; break;
		case ENUM_MAINTENANCEWORKORDER:	stream << ".MAINTENANCEWORKORDER."; break;
		case ENUM_MOVEORDER:	stream << ".MOVEORDER."; break;
		case ENUM_PURCHASEORDER:	stream << ".PURCHASEORDER."; break;
		case ENUM_WORKORDER:	stream << ".WORKORDER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcProjectOrderTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CHANGEORDER:	return L"CHANGEORDER";
		case ENUM_MAINTENANCEWORKORDER:	return L"MAINTENANCEWORKORDER";
		case ENUM_MOVEORDER:	return L"MOVEORDER";
		case ENUM_PURCHASEORDER:	return L"PURCHASEORDER";
		case ENUM_WORKORDER:	return L"WORKORDER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcProjectOrderTypeEnum> IfcProjectOrderTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcProjectOrderTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcProjectOrderTypeEnum>(); }
	shared_ptr<IfcProjectOrderTypeEnum> type_object( new IfcProjectOrderTypeEnum() );
	if( std_iequal( arg, L".CHANGEORDER." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_CHANGEORDER;
	}
	else if( std_iequal( arg, L".MAINTENANCEWORKORDER." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_MAINTENANCEWORKORDER;
	}
	else if( std_iequal( arg, L".MOVEORDER." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_MOVEORDER;
	}
	else if( std_iequal( arg, L".PURCHASEORDER." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_PURCHASEORDER;
	}
	else if( std_iequal( arg, L".WORKORDER." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_WORKORDER;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcProjectOrderTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
