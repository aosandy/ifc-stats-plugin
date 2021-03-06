/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCoilTypeEnum.h"

// TYPE IfcCoilTypeEnum = ENUMERATION OF	(DXCOOLINGCOIL	,ELECTRICHEATINGCOIL	,GASHEATINGCOIL	,HYDRONICCOIL	,STEAMHEATINGCOIL	,WATERCOOLINGCOIL	,WATERHEATINGCOIL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcCoilTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCoilTypeEnum> copy_self( new IfcCoilTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCoilTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOILTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DXCOOLINGCOIL:	stream << ".DXCOOLINGCOIL."; break;
		case ENUM_ELECTRICHEATINGCOIL:	stream << ".ELECTRICHEATINGCOIL."; break;
		case ENUM_GASHEATINGCOIL:	stream << ".GASHEATINGCOIL."; break;
		case ENUM_HYDRONICCOIL:	stream << ".HYDRONICCOIL."; break;
		case ENUM_STEAMHEATINGCOIL:	stream << ".STEAMHEATINGCOIL."; break;
		case ENUM_WATERCOOLINGCOIL:	stream << ".WATERCOOLINGCOIL."; break;
		case ENUM_WATERHEATINGCOIL:	stream << ".WATERHEATINGCOIL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCoilTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_DXCOOLINGCOIL:	return L"DXCOOLINGCOIL";
		case ENUM_ELECTRICHEATINGCOIL:	return L"ELECTRICHEATINGCOIL";
		case ENUM_GASHEATINGCOIL:	return L"GASHEATINGCOIL";
		case ENUM_HYDRONICCOIL:	return L"HYDRONICCOIL";
		case ENUM_STEAMHEATINGCOIL:	return L"STEAMHEATINGCOIL";
		case ENUM_WATERCOOLINGCOIL:	return L"WATERCOOLINGCOIL";
		case ENUM_WATERHEATINGCOIL:	return L"WATERHEATINGCOIL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCoilTypeEnum> IfcCoilTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCoilTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCoilTypeEnum>(); }
	shared_ptr<IfcCoilTypeEnum> type_object( new IfcCoilTypeEnum() );
	if( std_iequal( arg, L".DXCOOLINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_DXCOOLINGCOIL;
	}
	else if( std_iequal( arg, L".ELECTRICHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_ELECTRICHEATINGCOIL;
	}
	else if( std_iequal( arg, L".GASHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_GASHEATINGCOIL;
	}
	else if( std_iequal( arg, L".HYDRONICCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_HYDRONICCOIL;
	}
	else if( std_iequal( arg, L".STEAMHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_STEAMHEATINGCOIL;
	}
	else if( std_iequal( arg, L".WATERCOOLINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_WATERCOOLINGCOIL;
	}
	else if( std_iequal( arg, L".WATERHEATINGCOIL." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_WATERHEATINGCOIL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCoilTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
