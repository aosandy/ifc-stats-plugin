/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDiscreteAccessoryTypeEnum.h"

// TYPE IfcDiscreteAccessoryTypeEnum = ENUMERATION OF	(ANCHORPLATE	,BRACKET	,SHOE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcDiscreteAccessoryTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDiscreteAccessoryTypeEnum> copy_self( new IfcDiscreteAccessoryTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDiscreteAccessoryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDISCRETEACCESSORYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ANCHORPLATE:	stream << ".ANCHORPLATE."; break;
		case ENUM_BRACKET:	stream << ".BRACKET."; break;
		case ENUM_SHOE:	stream << ".SHOE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDiscreteAccessoryTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ANCHORPLATE:	return L"ANCHORPLATE";
		case ENUM_BRACKET:	return L"BRACKET";
		case ENUM_SHOE:	return L"SHOE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDiscreteAccessoryTypeEnum> IfcDiscreteAccessoryTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDiscreteAccessoryTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDiscreteAccessoryTypeEnum>(); }
	shared_ptr<IfcDiscreteAccessoryTypeEnum> type_object( new IfcDiscreteAccessoryTypeEnum() );
	if( std_iequal( arg, L".ANCHORPLATE." ) )
	{
		type_object->m_enum = IfcDiscreteAccessoryTypeEnum::ENUM_ANCHORPLATE;
	}
	else if( std_iequal( arg, L".BRACKET." ) )
	{
		type_object->m_enum = IfcDiscreteAccessoryTypeEnum::ENUM_BRACKET;
	}
	else if( std_iequal( arg, L".SHOE." ) )
	{
		type_object->m_enum = IfcDiscreteAccessoryTypeEnum::ENUM_SHOE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDiscreteAccessoryTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDiscreteAccessoryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
