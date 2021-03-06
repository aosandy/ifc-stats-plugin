/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBuildingElementPartTypeEnum.h"

// TYPE IfcBuildingElementPartTypeEnum = ENUMERATION OF	(INSULATION	,PRECASTPANEL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcBuildingElementPartTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBuildingElementPartTypeEnum> copy_self( new IfcBuildingElementPartTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBuildingElementPartTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBUILDINGELEMENTPARTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_INSULATION:	stream << ".INSULATION."; break;
		case ENUM_PRECASTPANEL:	stream << ".PRECASTPANEL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBuildingElementPartTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_INSULATION:	return L"INSULATION";
		case ENUM_PRECASTPANEL:	return L"PRECASTPANEL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcBuildingElementPartTypeEnum> IfcBuildingElementPartTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBuildingElementPartTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBuildingElementPartTypeEnum>(); }
	shared_ptr<IfcBuildingElementPartTypeEnum> type_object( new IfcBuildingElementPartTypeEnum() );
	if( std_iequal( arg, L".INSULATION." ) )
	{
		type_object->m_enum = IfcBuildingElementPartTypeEnum::ENUM_INSULATION;
	}
	else if( std_iequal( arg, L".PRECASTPANEL." ) )
	{
		type_object->m_enum = IfcBuildingElementPartTypeEnum::ENUM_PRECASTPANEL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementPartTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementPartTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
